// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERSCALABLETARGETREQUEST_H
#define QTAWS_REGISTERSCALABLETARGETREQUEST_H

#include "applicationautoscalingrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class RegisterScalableTargetRequestPrivate;

class QTAWSAPPLICATIONAUTOSCALING_EXPORT RegisterScalableTargetRequest : public ApplicationAutoScalingRequest {

public:
    RegisterScalableTargetRequest(const RegisterScalableTargetRequest &other);
    RegisterScalableTargetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterScalableTargetRequest)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
