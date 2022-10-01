// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGRAPHQLAPIREQUEST_P_H
#define QTAWS_DELETEGRAPHQLAPIREQUEST_P_H

#include "appsyncrequest_p.h"
#include "deletegraphqlapirequest.h"

namespace QtAws {
namespace AppSync {

class DeleteGraphqlApiRequest;

class DeleteGraphqlApiRequestPrivate : public AppSyncRequestPrivate {

public:
    DeleteGraphqlApiRequestPrivate(const AppSyncRequest::Action action,
                                   DeleteGraphqlApiRequest * const q);
    DeleteGraphqlApiRequestPrivate(const DeleteGraphqlApiRequestPrivate &other,
                                   DeleteGraphqlApiRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteGraphqlApiRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
