// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEULAACCEPTANCESREQUEST_P_H
#define QTAWS_LISTEULAACCEPTANCESREQUEST_P_H

#include "nimblerequest_p.h"
#include "listeulaacceptancesrequest.h"

namespace QtAws {
namespace Nimble {

class ListEulaAcceptancesRequest;

class ListEulaAcceptancesRequestPrivate : public NimbleRequestPrivate {

public:
    ListEulaAcceptancesRequestPrivate(const NimbleRequest::Action action,
                                   ListEulaAcceptancesRequest * const q);
    ListEulaAcceptancesRequestPrivate(const ListEulaAcceptancesRequestPrivate &other,
                                   ListEulaAcceptancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEulaAcceptancesRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
