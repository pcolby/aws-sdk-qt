// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONFIGSREQUEST_P_H
#define QTAWS_LISTCONFIGSREQUEST_P_H

#include "groundstationrequest_p.h"
#include "listconfigsrequest.h"

namespace QtAws {
namespace GroundStation {

class ListConfigsRequest;

class ListConfigsRequestPrivate : public GroundStationRequestPrivate {

public:
    ListConfigsRequestPrivate(const GroundStationRequest::Action action,
                                   ListConfigsRequest * const q);
    ListConfigsRequestPrivate(const ListConfigsRequestPrivate &other,
                                   ListConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListConfigsRequest)

};

} // namespace GroundStation
} // namespace QtAws

#endif
