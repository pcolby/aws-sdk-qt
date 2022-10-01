// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOLVERSREQUEST_P_H
#define QTAWS_LISTRESOLVERSREQUEST_P_H

#include "appsyncrequest_p.h"
#include "listresolversrequest.h"

namespace QtAws {
namespace AppSync {

class ListResolversRequest;

class ListResolversRequestPrivate : public AppSyncRequestPrivate {

public:
    ListResolversRequestPrivate(const AppSyncRequest::Action action,
                                   ListResolversRequest * const q);
    ListResolversRequestPrivate(const ListResolversRequestPrivate &other,
                                   ListResolversRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListResolversRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
