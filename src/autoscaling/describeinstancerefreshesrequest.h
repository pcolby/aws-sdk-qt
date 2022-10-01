// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEREFRESHESREQUEST_H
#define QTAWS_DESCRIBEINSTANCEREFRESHESREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeInstanceRefreshesRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DescribeInstanceRefreshesRequest : public AutoScalingRequest {

public:
    DescribeInstanceRefreshesRequest(const DescribeInstanceRefreshesRequest &other);
    DescribeInstanceRefreshesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceRefreshesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
