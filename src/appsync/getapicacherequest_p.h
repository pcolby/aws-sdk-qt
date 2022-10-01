// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPICACHEREQUEST_P_H
#define QTAWS_GETAPICACHEREQUEST_P_H

#include "appsyncrequest_p.h"
#include "getapicacherequest.h"

namespace QtAws {
namespace AppSync {

class GetApiCacheRequest;

class GetApiCacheRequestPrivate : public AppSyncRequestPrivate {

public:
    GetApiCacheRequestPrivate(const AppSyncRequest::Action action,
                                   GetApiCacheRequest * const q);
    GetApiCacheRequestPrivate(const GetApiCacheRequestPrivate &other,
                                   GetApiCacheRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApiCacheRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
