// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGRAPHQLAPIREQUEST_P_H
#define QTAWS_GETGRAPHQLAPIREQUEST_P_H

#include "appsyncrequest_p.h"
#include "getgraphqlapirequest.h"

namespace QtAws {
namespace AppSync {

class GetGraphqlApiRequest;

class GetGraphqlApiRequestPrivate : public AppSyncRequestPrivate {

public:
    GetGraphqlApiRequestPrivate(const AppSyncRequest::Action action,
                                   GetGraphqlApiRequest * const q);
    GetGraphqlApiRequestPrivate(const GetGraphqlApiRequestPrivate &other,
                                   GetGraphqlApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetGraphqlApiRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
