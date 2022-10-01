// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFINDINGAGGREGATORSREQUEST_P_H
#define QTAWS_LISTFINDINGAGGREGATORSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "listfindingaggregatorsrequest.h"

namespace QtAws {
namespace SecurityHub {

class ListFindingAggregatorsRequest;

class ListFindingAggregatorsRequestPrivate : public SecurityHubRequestPrivate {

public:
    ListFindingAggregatorsRequestPrivate(const SecurityHubRequest::Action action,
                                   ListFindingAggregatorsRequest * const q);
    ListFindingAggregatorsRequestPrivate(const ListFindingAggregatorsRequestPrivate &other,
                                   ListFindingAggregatorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFindingAggregatorsRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
