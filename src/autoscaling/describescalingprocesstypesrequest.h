// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALINGPROCESSTYPESREQUEST_H
#define QTAWS_DESCRIBESCALINGPROCESSTYPESREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeScalingProcessTypesRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DescribeScalingProcessTypesRequest : public AutoScalingRequest {

public:
    DescribeScalingProcessTypesRequest(const DescribeScalingProcessTypesRequest &other);
    DescribeScalingProcessTypesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScalingProcessTypesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
