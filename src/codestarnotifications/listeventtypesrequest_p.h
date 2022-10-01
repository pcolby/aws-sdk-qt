// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTTYPESREQUEST_P_H
#define QTAWS_LISTEVENTTYPESREQUEST_P_H

#include "codestarnotificationsrequest_p.h"
#include "listeventtypesrequest.h"

namespace QtAws {
namespace CodestarNotifications {

class ListEventTypesRequest;

class ListEventTypesRequestPrivate : public CodestarNotificationsRequestPrivate {

public:
    ListEventTypesRequestPrivate(const CodestarNotificationsRequest::Action action,
                                   ListEventTypesRequest * const q);
    ListEventTypesRequestPrivate(const ListEventTypesRequestPrivate &other,
                                   ListEventTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEventTypesRequest)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
