// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOLVERREQUEST_P_H
#define QTAWS_DELETERESOLVERREQUEST_P_H

#include "appsyncrequest_p.h"
#include "deleteresolverrequest.h"

namespace QtAws {
namespace AppSync {

class DeleteResolverRequest;

class DeleteResolverRequestPrivate : public AppSyncRequestPrivate {

public:
    DeleteResolverRequestPrivate(const AppSyncRequest::Action action,
                                   DeleteResolverRequest * const q);
    DeleteResolverRequestPrivate(const DeleteResolverRequestPrivate &other,
                                   DeleteResolverRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResolverRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
