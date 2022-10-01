// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOLVERREQUEST_P_H
#define QTAWS_CREATERESOLVERREQUEST_P_H

#include "appsyncrequest_p.h"
#include "createresolverrequest.h"

namespace QtAws {
namespace AppSync {

class CreateResolverRequest;

class CreateResolverRequestPrivate : public AppSyncRequestPrivate {

public:
    CreateResolverRequestPrivate(const AppSyncRequest::Action action,
                                   CreateResolverRequest * const q);
    CreateResolverRequestPrivate(const CreateResolverRequestPrivate &other,
                                   CreateResolverRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateResolverRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
