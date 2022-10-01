// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPICACHEREQUEST_P_H
#define QTAWS_CREATEAPICACHEREQUEST_P_H

#include "appsyncrequest_p.h"
#include "createapicacherequest.h"

namespace QtAws {
namespace AppSync {

class CreateApiCacheRequest;

class CreateApiCacheRequestPrivate : public AppSyncRequestPrivate {

public:
    CreateApiCacheRequestPrivate(const AppSyncRequest::Action action,
                                   CreateApiCacheRequest * const q);
    CreateApiCacheRequestPrivate(const CreateApiCacheRequestPrivate &other,
                                   CreateApiCacheRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateApiCacheRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
