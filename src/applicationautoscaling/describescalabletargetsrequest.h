// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALABLETARGETSREQUEST_H
#define QTAWS_DESCRIBESCALABLETARGETSREQUEST_H

#include "applicationautoscalingrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class DescribeScalableTargetsRequestPrivate;

class QTAWSAPPLICATIONAUTOSCALING_EXPORT DescribeScalableTargetsRequest : public ApplicationAutoScalingRequest {

public:
    DescribeScalableTargetsRequest(const DescribeScalableTargetsRequest &other);
    DescribeScalableTargetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeScalableTargetsRequest)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
