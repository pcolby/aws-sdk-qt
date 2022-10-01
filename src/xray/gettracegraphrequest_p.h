// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRACEGRAPHREQUEST_P_H
#define QTAWS_GETTRACEGRAPHREQUEST_P_H

#include "xrayrequest_p.h"
#include "gettracegraphrequest.h"

namespace QtAws {
namespace XRay {

class GetTraceGraphRequest;

class GetTraceGraphRequestPrivate : public XRayRequestPrivate {

public:
    GetTraceGraphRequestPrivate(const XRayRequest::Action action,
                                   GetTraceGraphRequest * const q);
    GetTraceGraphRequestPrivate(const GetTraceGraphRequestPrivate &other,
                                   GetTraceGraphRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTraceGraphRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
