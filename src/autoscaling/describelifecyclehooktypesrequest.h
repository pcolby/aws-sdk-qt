// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELIFECYCLEHOOKTYPESREQUEST_H
#define QTAWS_DESCRIBELIFECYCLEHOOKTYPESREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLifecycleHookTypesRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DescribeLifecycleHookTypesRequest : public AutoScalingRequest {

public:
    DescribeLifecycleHookTypesRequest(const DescribeLifecycleHookTypesRequest &other);
    DescribeLifecycleHookTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLifecycleHookTypesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
