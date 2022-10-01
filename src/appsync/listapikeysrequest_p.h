// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPIKEYSREQUEST_P_H
#define QTAWS_LISTAPIKEYSREQUEST_P_H

#include "appsyncrequest_p.h"
#include "listapikeysrequest.h"

namespace QtAws {
namespace AppSync {

class ListApiKeysRequest;

class ListApiKeysRequestPrivate : public AppSyncRequestPrivate {

public:
    ListApiKeysRequestPrivate(const AppSyncRequest::Action action,
                                   ListApiKeysRequest * const q);
    ListApiKeysRequestPrivate(const ListApiKeysRequestPrivate &other,
                                   ListApiKeysRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListApiKeysRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
