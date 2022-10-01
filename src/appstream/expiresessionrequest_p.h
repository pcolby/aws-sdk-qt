// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPIRESESSIONREQUEST_P_H
#define QTAWS_EXPIRESESSIONREQUEST_P_H

#include "appstreamrequest_p.h"
#include "expiresessionrequest.h"

namespace QtAws {
namespace AppStream {

class ExpireSessionRequest;

class ExpireSessionRequestPrivate : public AppStreamRequestPrivate {

public:
    ExpireSessionRequestPrivate(const AppStreamRequest::Action action,
                                   ExpireSessionRequest * const q);
    ExpireSessionRequestPrivate(const ExpireSessionRequestPrivate &other,
                                   ExpireSessionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExpireSessionRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
