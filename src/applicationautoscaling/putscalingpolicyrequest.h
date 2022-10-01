// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCALINGPOLICYREQUEST_H
#define QTAWS_PUTSCALINGPOLICYREQUEST_H

#include "applicationautoscalingrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class PutScalingPolicyRequestPrivate;

class QTAWSAPPLICATIONAUTOSCALING_EXPORT PutScalingPolicyRequest : public ApplicationAutoScalingRequest {

public:
    PutScalingPolicyRequest(const PutScalingPolicyRequest &other);
    PutScalingPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutScalingPolicyRequest)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
