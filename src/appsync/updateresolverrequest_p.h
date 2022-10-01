// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOLVERREQUEST_P_H
#define QTAWS_UPDATERESOLVERREQUEST_P_H

#include "appsyncrequest_p.h"
#include "updateresolverrequest.h"

namespace QtAws {
namespace AppSync {

class UpdateResolverRequest;

class UpdateResolverRequestPrivate : public AppSyncRequestPrivate {

public:
    UpdateResolverRequestPrivate(const AppSyncRequest::Action action,
                                   UpdateResolverRequest * const q);
    UpdateResolverRequestPrivate(const UpdateResolverRequestPrivate &other,
                                   UpdateResolverRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateResolverRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
