// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FLUSHAPICACHEREQUEST_P_H
#define QTAWS_FLUSHAPICACHEREQUEST_P_H

#include "appsyncrequest_p.h"
#include "flushapicacherequest.h"

namespace QtAws {
namespace AppSync {

class FlushApiCacheRequest;

class FlushApiCacheRequestPrivate : public AppSyncRequestPrivate {

public:
    FlushApiCacheRequestPrivate(const AppSyncRequest::Action action,
                                   FlushApiCacheRequest * const q);
    FlushApiCacheRequestPrivate(const FlushApiCacheRequestPrivate &other,
                                   FlushApiCacheRequest * const q);

private:
    Q_DECLARE_PUBLIC(FlushApiCacheRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
