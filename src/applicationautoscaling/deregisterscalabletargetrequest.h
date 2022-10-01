// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERSCALABLETARGETREQUEST_H
#define QTAWS_DEREGISTERSCALABLETARGETREQUEST_H

#include "applicationautoscalingrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class DeregisterScalableTargetRequestPrivate;

class QTAWSAPPLICATIONAUTOSCALING_EXPORT DeregisterScalableTargetRequest : public ApplicationAutoScalingRequest {

public:
    DeregisterScalableTargetRequest(const DeregisterScalableTargetRequest &other);
    DeregisterScalableTargetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterScalableTargetRequest)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
