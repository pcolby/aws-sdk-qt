// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTLIMITSREQUEST_H
#define QTAWS_DESCRIBEACCOUNTLIMITSREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeAccountLimitsRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DescribeAccountLimitsRequest : public AutoScalingRequest {

public:
    DescribeAccountLimitsRequest(const DescribeAccountLimitsRequest &other);
    DescribeAccountLimitsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountLimitsRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
