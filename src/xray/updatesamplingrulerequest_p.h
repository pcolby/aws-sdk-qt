// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESAMPLINGRULEREQUEST_P_H
#define QTAWS_UPDATESAMPLINGRULEREQUEST_P_H

#include "xrayrequest_p.h"
#include "updatesamplingrulerequest.h"

namespace QtAws {
namespace XRay {

class UpdateSamplingRuleRequest;

class UpdateSamplingRuleRequestPrivate : public XRayRequestPrivate {

public:
    UpdateSamplingRuleRequestPrivate(const XRayRequest::Action action,
                                   UpdateSamplingRuleRequest * const q);
    UpdateSamplingRuleRequestPrivate(const UpdateSamplingRuleRequestPrivate &other,
                                   UpdateSamplingRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSamplingRuleRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
