// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLEXBOTSREQUEST_P_H
#define QTAWS_LISTLEXBOTSREQUEST_P_H

#include "connectrequest_p.h"
#include "listlexbotsrequest.h"

namespace QtAws {
namespace Connect {

class ListLexBotsRequest;

class ListLexBotsRequestPrivate : public ConnectRequestPrivate {

public:
    ListLexBotsRequestPrivate(const ConnectRequest::Action action,
                                   ListLexBotsRequest * const q);
    ListLexBotsRequestPrivate(const ListLexBotsRequestPrivate &other,
                                   ListLexBotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListLexBotsRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
