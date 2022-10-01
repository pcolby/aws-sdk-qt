// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESAMPLINGRULEREQUEST_P_H
#define QTAWS_CREATESAMPLINGRULEREQUEST_P_H

#include "xrayrequest_p.h"
#include "createsamplingrulerequest.h"

namespace QtAws {
namespace XRay {

class CreateSamplingRuleRequest;

class CreateSamplingRuleRequestPrivate : public XRayRequestPrivate {

public:
    CreateSamplingRuleRequestPrivate(const XRayRequest::Action action,
                                   CreateSamplingRuleRequest * const q);
    CreateSamplingRuleRequestPrivate(const CreateSamplingRuleRequestPrivate &other,
                                   CreateSamplingRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSamplingRuleRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
