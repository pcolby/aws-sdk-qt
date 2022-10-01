// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDACTIONSREQUEST_H
#define QTAWS_DESCRIBESCHEDULEDACTIONSREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeScheduledActionsRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DescribeScheduledActionsRequest : public AutoScalingRequest {

public:
    DescribeScheduledActionsRequest(const DescribeScheduledActionsRequest &other);
    DescribeScheduledActionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScheduledActionsRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
