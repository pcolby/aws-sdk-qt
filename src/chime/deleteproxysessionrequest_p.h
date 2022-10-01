// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROXYSESSIONREQUEST_P_H
#define QTAWS_DELETEPROXYSESSIONREQUEST_P_H

#include "chimerequest_p.h"
#include "deleteproxysessionrequest.h"

namespace QtAws {
namespace Chime {

class DeleteProxySessionRequest;

class DeleteProxySessionRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteProxySessionRequestPrivate(const ChimeRequest::Action action,
                                   DeleteProxySessionRequest * const q);
    DeleteProxySessionRequestPrivate(const DeleteProxySessionRequestPrivate &other,
                                   DeleteProxySessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProxySessionRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
