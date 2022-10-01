// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCALINGPOLICYREQUEST_H
#define QTAWS_PUTSCALINGPOLICYREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class PutScalingPolicyRequestPrivate;

class QTAWSAUTOSCALING_EXPORT PutScalingPolicyRequest : public AutoScalingRequest {

public:
    PutScalingPolicyRequest(const PutScalingPolicyRequest &other);
    PutScalingPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutScalingPolicyRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
