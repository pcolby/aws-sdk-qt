// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETERMINATIONPOLICYTYPESREQUEST_H
#define QTAWS_DESCRIBETERMINATIONPOLICYTYPESREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeTerminationPolicyTypesRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DescribeTerminationPolicyTypesRequest : public AutoScalingRequest {

public:
    DescribeTerminationPolicyTypesRequest(const DescribeTerminationPolicyTypesRequest &other);
    DescribeTerminationPolicyTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTerminationPolicyTypesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
