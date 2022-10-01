// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROXYSESSIONREQUEST_P_H
#define QTAWS_GETPROXYSESSIONREQUEST_P_H

#include "chimerequest_p.h"
#include "getproxysessionrequest.h"

namespace QtAws {
namespace Chime {

class GetProxySessionRequest;

class GetProxySessionRequestPrivate : public ChimeRequestPrivate {

public:
    GetProxySessionRequestPrivate(const ChimeRequest::Action action,
                                   GetProxySessionRequest * const q);
    GetProxySessionRequestPrivate(const GetProxySessionRequestPrivate &other,
                                   GetProxySessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetProxySessionRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
