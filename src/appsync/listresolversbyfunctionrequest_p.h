// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERSBYFUNCTIONREQUEST_P_H
#define QTAWS_LISTRESOLVERSBYFUNCTIONREQUEST_P_H

#include "appsyncrequest_p.h"
#include "listresolversbyfunctionrequest.h"

namespace QtAws {
namespace AppSync {

class ListResolversByFunctionRequest;

class ListResolversByFunctionRequestPrivate : public AppSyncRequestPrivate {

public:
    ListResolversByFunctionRequestPrivate(const AppSyncRequest::Action action,
                                   ListResolversByFunctionRequest * const q);
    ListResolversByFunctionRequestPrivate(const ListResolversByFunctionRequestPrivate &other,
                                   ListResolversByFunctionRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResolversByFunctionRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
