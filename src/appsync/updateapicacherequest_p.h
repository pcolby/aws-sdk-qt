// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPICACHEREQUEST_P_H
#define QTAWS_UPDATEAPICACHEREQUEST_P_H

#include "appsyncrequest_p.h"
#include "updateapicacherequest.h"

namespace QtAws {
namespace AppSync {

class UpdateApiCacheRequest;

class UpdateApiCacheRequestPrivate : public AppSyncRequestPrivate {

public:
    UpdateApiCacheRequestPrivate(const AppSyncRequest::Action action,
                                   UpdateApiCacheRequest * const q);
    UpdateApiCacheRequestPrivate(const UpdateApiCacheRequestPrivate &other,
                                   UpdateApiCacheRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApiCacheRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
