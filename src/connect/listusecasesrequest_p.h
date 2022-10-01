// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSECASESREQUEST_P_H
#define QTAWS_LISTUSECASESREQUEST_P_H

#include "connectrequest_p.h"
#include "listusecasesrequest.h"

namespace QtAws {
namespace Connect {

class ListUseCasesRequest;

class ListUseCasesRequestPrivate : public ConnectRequestPrivate {

public:
    ListUseCasesRequestPrivate(const ConnectRequest::Action action,
                                   ListUseCasesRequest * const q);
    ListUseCasesRequestPrivate(const ListUseCasesRequestPrivate &other,
                                   ListUseCasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUseCasesRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
