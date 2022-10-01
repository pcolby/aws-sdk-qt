// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGATEWAYGROUPSREQUEST_P_H
#define QTAWS_LISTGATEWAYGROUPSREQUEST_P_H

#include "alexaforbusinessrequest_p.h"
#include "listgatewaygroupsrequest.h"

namespace QtAws {
namespace AlexaForBusiness {

class ListGatewayGroupsRequest;

class ListGatewayGroupsRequestPrivate : public AlexaForBusinessRequestPrivate {

public:
    ListGatewayGroupsRequestPrivate(const AlexaForBusinessRequest::Action action,
                                   ListGatewayGroupsRequest * const q);
    ListGatewayGroupsRequestPrivate(const ListGatewayGroupsRequestPrivate &other,
                                   ListGatewayGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListGatewayGroupsRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
