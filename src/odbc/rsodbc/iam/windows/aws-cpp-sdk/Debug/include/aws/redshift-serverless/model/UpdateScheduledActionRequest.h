﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/model/Schedule.h>
#include <aws/redshift-serverless/model/TargetAction.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class UpdateScheduledActionRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API UpdateScheduledActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateScheduledAction"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies whether to enable the scheduled action.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>Specifies whether to enable the scheduled action.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>Specifies whether to enable the scheduled action.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>Specifies whether to enable the scheduled action.</p>
     */
    inline UpdateScheduledActionRequest& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The end time in UTC of the scheduled action to update.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end time in UTC of the scheduled action to update.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end time in UTC of the scheduled action to update.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end time in UTC of the scheduled action to update.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end time in UTC of the scheduled action to update.</p>
     */
    inline UpdateScheduledActionRequest& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end time in UTC of the scheduled action to update.</p>
     */
    inline UpdateScheduledActionRequest& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The ARN of the IAM role to assume to run the scheduled action. This IAM role
     * must have permission to run the Amazon Redshift Serverless API operation in the
     * scheduled action. This IAM role must allow the Amazon Redshift scheduler to
     * schedule creating snapshots (Principal scheduler.redshift.amazonaws.com) to
     * assume permissions on your behalf. For more information about the IAM role to
     * use with the Amazon Redshift scheduler, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html">Using
     * Identity-Based Policies for Amazon Redshift</a> in the Amazon Redshift Cluster
     * Management Guide</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM role to assume to run the scheduled action. This IAM role
     * must have permission to run the Amazon Redshift Serverless API operation in the
     * scheduled action. This IAM role must allow the Amazon Redshift scheduler to
     * schedule creating snapshots (Principal scheduler.redshift.amazonaws.com) to
     * assume permissions on your behalf. For more information about the IAM role to
     * use with the Amazon Redshift scheduler, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html">Using
     * Identity-Based Policies for Amazon Redshift</a> in the Amazon Redshift Cluster
     * Management Guide</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM role to assume to run the scheduled action. This IAM role
     * must have permission to run the Amazon Redshift Serverless API operation in the
     * scheduled action. This IAM role must allow the Amazon Redshift scheduler to
     * schedule creating snapshots (Principal scheduler.redshift.amazonaws.com) to
     * assume permissions on your behalf. For more information about the IAM role to
     * use with the Amazon Redshift scheduler, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html">Using
     * Identity-Based Policies for Amazon Redshift</a> in the Amazon Redshift Cluster
     * Management Guide</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM role to assume to run the scheduled action. This IAM role
     * must have permission to run the Amazon Redshift Serverless API operation in the
     * scheduled action. This IAM role must allow the Amazon Redshift scheduler to
     * schedule creating snapshots (Principal scheduler.redshift.amazonaws.com) to
     * assume permissions on your behalf. For more information about the IAM role to
     * use with the Amazon Redshift scheduler, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html">Using
     * Identity-Based Policies for Amazon Redshift</a> in the Amazon Redshift Cluster
     * Management Guide</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM role to assume to run the scheduled action. This IAM role
     * must have permission to run the Amazon Redshift Serverless API operation in the
     * scheduled action. This IAM role must allow the Amazon Redshift scheduler to
     * schedule creating snapshots (Principal scheduler.redshift.amazonaws.com) to
     * assume permissions on your behalf. For more information about the IAM role to
     * use with the Amazon Redshift scheduler, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html">Using
     * Identity-Based Policies for Amazon Redshift</a> in the Amazon Redshift Cluster
     * Management Guide</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM role to assume to run the scheduled action. This IAM role
     * must have permission to run the Amazon Redshift Serverless API operation in the
     * scheduled action. This IAM role must allow the Amazon Redshift scheduler to
     * schedule creating snapshots (Principal scheduler.redshift.amazonaws.com) to
     * assume permissions on your behalf. For more information about the IAM role to
     * use with the Amazon Redshift scheduler, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html">Using
     * Identity-Based Policies for Amazon Redshift</a> in the Amazon Redshift Cluster
     * Management Guide</p>
     */
    inline UpdateScheduledActionRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM role to assume to run the scheduled action. This IAM role
     * must have permission to run the Amazon Redshift Serverless API operation in the
     * scheduled action. This IAM role must allow the Amazon Redshift scheduler to
     * schedule creating snapshots (Principal scheduler.redshift.amazonaws.com) to
     * assume permissions on your behalf. For more information about the IAM role to
     * use with the Amazon Redshift scheduler, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html">Using
     * Identity-Based Policies for Amazon Redshift</a> in the Amazon Redshift Cluster
     * Management Guide</p>
     */
    inline UpdateScheduledActionRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM role to assume to run the scheduled action. This IAM role
     * must have permission to run the Amazon Redshift Serverless API operation in the
     * scheduled action. This IAM role must allow the Amazon Redshift scheduler to
     * schedule creating snapshots (Principal scheduler.redshift.amazonaws.com) to
     * assume permissions on your behalf. For more information about the IAM role to
     * use with the Amazon Redshift scheduler, see <a
     * href="https://docs.aws.amazon.com/redshift/latest/mgmt/redshift-iam-access-control-identity-based.html">Using
     * Identity-Based Policies for Amazon Redshift</a> in the Amazon Redshift Cluster
     * Management Guide</p>
     */
    inline UpdateScheduledActionRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The schedule for a one-time (at timestamp format) or recurring (cron format)
     * scheduled action. Schedule invocations must be separated by at least one hour.
     * Times are in UTC.</p> <ul> <li> <p>Format of at timestamp is
     * <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2016-03-04T17:27:00</code>.</p> </li> <li> <p>Format of cron expression is
     * <code>(Minutes Hours Day-of-month Month Day-of-week Year)</code>. For example,
     * <code>"(0 10 ? * MON *)"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p> </li>
     * </ul>
     */
    inline const Schedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule for a one-time (at timestamp format) or recurring (cron format)
     * scheduled action. Schedule invocations must be separated by at least one hour.
     * Times are in UTC.</p> <ul> <li> <p>Format of at timestamp is
     * <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2016-03-04T17:27:00</code>.</p> </li> <li> <p>Format of cron expression is
     * <code>(Minutes Hours Day-of-month Month Day-of-week Year)</code>. For example,
     * <code>"(0 10 ? * MON *)"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p> </li>
     * </ul>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>The schedule for a one-time (at timestamp format) or recurring (cron format)
     * scheduled action. Schedule invocations must be separated by at least one hour.
     * Times are in UTC.</p> <ul> <li> <p>Format of at timestamp is
     * <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2016-03-04T17:27:00</code>.</p> </li> <li> <p>Format of cron expression is
     * <code>(Minutes Hours Day-of-month Month Day-of-week Year)</code>. For example,
     * <code>"(0 10 ? * MON *)"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p> </li>
     * </ul>
     */
    inline void SetSchedule(const Schedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>The schedule for a one-time (at timestamp format) or recurring (cron format)
     * scheduled action. Schedule invocations must be separated by at least one hour.
     * Times are in UTC.</p> <ul> <li> <p>Format of at timestamp is
     * <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2016-03-04T17:27:00</code>.</p> </li> <li> <p>Format of cron expression is
     * <code>(Minutes Hours Day-of-month Month Day-of-week Year)</code>. For example,
     * <code>"(0 10 ? * MON *)"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p> </li>
     * </ul>
     */
    inline void SetSchedule(Schedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>The schedule for a one-time (at timestamp format) or recurring (cron format)
     * scheduled action. Schedule invocations must be separated by at least one hour.
     * Times are in UTC.</p> <ul> <li> <p>Format of at timestamp is
     * <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2016-03-04T17:27:00</code>.</p> </li> <li> <p>Format of cron expression is
     * <code>(Minutes Hours Day-of-month Month Day-of-week Year)</code>. For example,
     * <code>"(0 10 ? * MON *)"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p> </li>
     * </ul>
     */
    inline UpdateScheduledActionRequest& WithSchedule(const Schedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule for a one-time (at timestamp format) or recurring (cron format)
     * scheduled action. Schedule invocations must be separated by at least one hour.
     * Times are in UTC.</p> <ul> <li> <p>Format of at timestamp is
     * <code>yyyy-mm-ddThh:mm:ss</code>. For example,
     * <code>2016-03-04T17:27:00</code>.</p> </li> <li> <p>Format of cron expression is
     * <code>(Minutes Hours Day-of-month Month Day-of-week Year)</code>. For example,
     * <code>"(0 10 ? * MON *)"</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/events/ScheduledEvents.html#CronExpressions">Cron
     * Expressions</a> in the <i>Amazon CloudWatch Events User Guide</i>.</p> </li>
     * </ul>
     */
    inline UpdateScheduledActionRequest& WithSchedule(Schedule&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>The descripion of the scheduled action to update to.</p>
     */
    inline const Aws::String& GetScheduledActionDescription() const{ return m_scheduledActionDescription; }

    /**
     * <p>The descripion of the scheduled action to update to.</p>
     */
    inline bool ScheduledActionDescriptionHasBeenSet() const { return m_scheduledActionDescriptionHasBeenSet; }

    /**
     * <p>The descripion of the scheduled action to update to.</p>
     */
    inline void SetScheduledActionDescription(const Aws::String& value) { m_scheduledActionDescriptionHasBeenSet = true; m_scheduledActionDescription = value; }

    /**
     * <p>The descripion of the scheduled action to update to.</p>
     */
    inline void SetScheduledActionDescription(Aws::String&& value) { m_scheduledActionDescriptionHasBeenSet = true; m_scheduledActionDescription = std::move(value); }

    /**
     * <p>The descripion of the scheduled action to update to.</p>
     */
    inline void SetScheduledActionDescription(const char* value) { m_scheduledActionDescriptionHasBeenSet = true; m_scheduledActionDescription.assign(value); }

    /**
     * <p>The descripion of the scheduled action to update to.</p>
     */
    inline UpdateScheduledActionRequest& WithScheduledActionDescription(const Aws::String& value) { SetScheduledActionDescription(value); return *this;}

    /**
     * <p>The descripion of the scheduled action to update to.</p>
     */
    inline UpdateScheduledActionRequest& WithScheduledActionDescription(Aws::String&& value) { SetScheduledActionDescription(std::move(value)); return *this;}

    /**
     * <p>The descripion of the scheduled action to update to.</p>
     */
    inline UpdateScheduledActionRequest& WithScheduledActionDescription(const char* value) { SetScheduledActionDescription(value); return *this;}


    /**
     * <p>The name of the scheduled action to update to.</p>
     */
    inline const Aws::String& GetScheduledActionName() const{ return m_scheduledActionName; }

    /**
     * <p>The name of the scheduled action to update to.</p>
     */
    inline bool ScheduledActionNameHasBeenSet() const { return m_scheduledActionNameHasBeenSet; }

    /**
     * <p>The name of the scheduled action to update to.</p>
     */
    inline void SetScheduledActionName(const Aws::String& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = value; }

    /**
     * <p>The name of the scheduled action to update to.</p>
     */
    inline void SetScheduledActionName(Aws::String&& value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName = std::move(value); }

    /**
     * <p>The name of the scheduled action to update to.</p>
     */
    inline void SetScheduledActionName(const char* value) { m_scheduledActionNameHasBeenSet = true; m_scheduledActionName.assign(value); }

    /**
     * <p>The name of the scheduled action to update to.</p>
     */
    inline UpdateScheduledActionRequest& WithScheduledActionName(const Aws::String& value) { SetScheduledActionName(value); return *this;}

    /**
     * <p>The name of the scheduled action to update to.</p>
     */
    inline UpdateScheduledActionRequest& WithScheduledActionName(Aws::String&& value) { SetScheduledActionName(std::move(value)); return *this;}

    /**
     * <p>The name of the scheduled action to update to.</p>
     */
    inline UpdateScheduledActionRequest& WithScheduledActionName(const char* value) { SetScheduledActionName(value); return *this;}


    /**
     * <p>The start time in UTC of the scheduled action to update to.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time in UTC of the scheduled action to update to.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time in UTC of the scheduled action to update to.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time in UTC of the scheduled action to update to.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time in UTC of the scheduled action to update to.</p>
     */
    inline UpdateScheduledActionRequest& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time in UTC of the scheduled action to update to.</p>
     */
    inline UpdateScheduledActionRequest& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    
    inline const TargetAction& GetTargetAction() const{ return m_targetAction; }

    
    inline bool TargetActionHasBeenSet() const { return m_targetActionHasBeenSet; }

    
    inline void SetTargetAction(const TargetAction& value) { m_targetActionHasBeenSet = true; m_targetAction = value; }

    
    inline void SetTargetAction(TargetAction&& value) { m_targetActionHasBeenSet = true; m_targetAction = std::move(value); }

    
    inline UpdateScheduledActionRequest& WithTargetAction(const TargetAction& value) { SetTargetAction(value); return *this;}

    
    inline UpdateScheduledActionRequest& WithTargetAction(TargetAction&& value) { SetTargetAction(std::move(value)); return *this;}

  private:

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Schedule m_schedule;
    bool m_scheduleHasBeenSet = false;

    Aws::String m_scheduledActionDescription;
    bool m_scheduledActionDescriptionHasBeenSet = false;

    Aws::String m_scheduledActionName;
    bool m_scheduledActionNameHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    TargetAction m_targetAction;
    bool m_targetActionHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
