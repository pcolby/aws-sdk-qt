// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPROVEDORIGINSREQUEST_P_H
#define QTAWS_LISTAPPROVEDORIGINSREQUEST_P_H

#include "connectrequest_p.h"
#include "listapprovedoriginsrequest.h"

namespace QtAws {
namespace Connect {

class ListApprovedOriginsRequest;

class ListApprovedOriginsRequestPrivate : public ConnectRequestPrivate {

public:
    ListApprovedOriginsRequestPrivate(const ConnectRequest::Action action,
                                   ListApprovedOriginsRequest * const q);
    ListApprovedOriginsRequestPrivate(const ListApprovedOriginsRequestPrivate &other,
                                   ListApprovedOriginsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListApprovedOriginsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
