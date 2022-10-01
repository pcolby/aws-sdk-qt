// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPIKEYREQUEST_P_H
#define QTAWS_CREATEAPIKEYREQUEST_P_H

#include "appsyncrequest_p.h"
#include "createapikeyrequest.h"

namespace QtAws {
namespace AppSync {

class CreateApiKeyRequest;

class CreateApiKeyRequestPrivate : public AppSyncRequestPrivate {

public:
    CreateApiKeyRequestPrivate(const AppSyncRequest::Action action,
                                   CreateApiKeyRequest * const q);
    CreateApiKeyRequestPrivate(const CreateApiKeyRequestPrivate &other,
                                   CreateApiKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateApiKeyRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
