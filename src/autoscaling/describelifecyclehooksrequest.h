// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELIFECYCLEHOOKSREQUEST_H
#define QTAWS_DESCRIBELIFECYCLEHOOKSREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLifecycleHooksRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DescribeLifecycleHooksRequest : public AutoScalingRequest {

public:
    DescribeLifecycleHooksRequest(const DescribeLifecycleHooksRequest &other);
    DescribeLifecycleHooksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLifecycleHooksRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
