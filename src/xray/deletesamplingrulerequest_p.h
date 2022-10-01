// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESAMPLINGRULEREQUEST_P_H
#define QTAWS_DELETESAMPLINGRULEREQUEST_P_H

#include "xrayrequest_p.h"
#include "deletesamplingrulerequest.h"

namespace QtAws {
namespace XRay {

class DeleteSamplingRuleRequest;

class DeleteSamplingRuleRequestPrivate : public XRayRequestPrivate {

public:
    DeleteSamplingRuleRequestPrivate(const XRayRequest::Action action,
                                   DeleteSamplingRuleRequest * const q);
    DeleteSamplingRuleRequestPrivate(const DeleteSamplingRuleRequestPrivate &other,
                                   DeleteSamplingRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSamplingRuleRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
