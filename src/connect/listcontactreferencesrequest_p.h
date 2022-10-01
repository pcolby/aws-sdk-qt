// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTREFERENCESREQUEST_P_H
#define QTAWS_LISTCONTACTREFERENCESREQUEST_P_H

#include "connectrequest_p.h"
#include "listcontactreferencesrequest.h"

namespace QtAws {
namespace Connect {

class ListContactReferencesRequest;

class ListContactReferencesRequestPrivate : public ConnectRequestPrivate {

public:
    ListContactReferencesRequestPrivate(const ConnectRequest::Action action,
                                   ListContactReferencesRequest * const q);
    ListContactReferencesRequestPrivate(const ListContactReferencesRequestPrivate &other,
                                   ListContactReferencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListContactReferencesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
