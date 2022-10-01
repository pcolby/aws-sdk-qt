// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSAMPLINGRULESREQUEST_P_H
#define QTAWS_GETSAMPLINGRULESREQUEST_P_H

#include "xrayrequest_p.h"
#include "getsamplingrulesrequest.h"

namespace QtAws {
namespace XRay {

class GetSamplingRulesRequest;

class GetSamplingRulesRequestPrivate : public XRayRequestPrivate {

public:
    GetSamplingRulesRequestPrivate(const XRayRequest::Action action,
                                   GetSamplingRulesRequest * const q);
    GetSamplingRulesRequestPrivate(const GetSamplingRulesRequestPrivate &other,
                                   GetSamplingRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSamplingRulesRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
