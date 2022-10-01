// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITIESREQUEST_P_H
#define QTAWS_LISTENTITIESREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "listentitiesrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class ListEntitiesRequest;

class ListEntitiesRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    ListEntitiesRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   ListEntitiesRequest * const q);
    ListEntitiesRequestPrivate(const ListEntitiesRequestPrivate &other,
                                   ListEntitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListEntitiesRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
