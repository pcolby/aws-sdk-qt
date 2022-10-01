// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPICACHEREQUEST_P_H
#define QTAWS_DELETEAPICACHEREQUEST_P_H

#include "appsyncrequest_p.h"
#include "deleteapicacherequest.h"

namespace QtAws {
namespace AppSync {

class DeleteApiCacheRequest;

class DeleteApiCacheRequestPrivate : public AppSyncRequestPrivate {

public:
    DeleteApiCacheRequestPrivate(const AppSyncRequest::Action action,
                                   DeleteApiCacheRequest * const q);
    DeleteApiCacheRequestPrivate(const DeleteApiCacheRequestPrivate &other,
                                   DeleteApiCacheRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApiCacheRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
