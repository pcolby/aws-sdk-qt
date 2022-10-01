// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOLVERREQUEST_P_H
#define QTAWS_GETRESOLVERREQUEST_P_H

#include "appsyncrequest_p.h"
#include "getresolverrequest.h"

namespace QtAws {
namespace AppSync {

class GetResolverRequest;

class GetResolverRequestPrivate : public AppSyncRequestPrivate {

public:
    GetResolverRequestPrivate(const AppSyncRequest::Action action,
                                   GetResolverRequest * const q);
    GetResolverRequestPrivate(const GetResolverRequestPrivate &other,
                                   GetResolverRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetResolverRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
