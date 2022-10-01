// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICEGRAPHREQUEST_P_H
#define QTAWS_GETSERVICEGRAPHREQUEST_P_H

#include "xrayrequest_p.h"
#include "getservicegraphrequest.h"

namespace QtAws {
namespace XRay {

class GetServiceGraphRequest;

class GetServiceGraphRequestPrivate : public XRayRequestPrivate {

public:
    GetServiceGraphRequestPrivate(const XRayRequest::Action action,
                                   GetServiceGraphRequest * const q);
    GetServiceGraphRequestPrivate(const GetServiceGraphRequestPrivate &other,
                                   GetServiceGraphRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServiceGraphRequest)

};

} // namespace XRay
} // namespace QtAws

#endif
