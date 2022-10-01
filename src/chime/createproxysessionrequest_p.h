// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROXYSESSIONREQUEST_P_H
#define QTAWS_CREATEPROXYSESSIONREQUEST_P_H

#include "chimerequest_p.h"
#include "createproxysessionrequest.h"

namespace QtAws {
namespace Chime {

class CreateProxySessionRequest;

class CreateProxySessionRequestPrivate : public ChimeRequestPrivate {

public:
    CreateProxySessionRequestPrivate(const ChimeRequest::Action action,
                                   CreateProxySessionRequest * const q);
    CreateProxySessionRequestPrivate(const CreateProxySessionRequestPrivate &other,
                                   CreateProxySessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProxySessionRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
