// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTHINGPRINCIPALSREQUEST_P_H
#define QTAWS_LISTTHINGPRINCIPALSREQUEST_P_H

#include "iotrequest_p.h"
#include "listthingprincipalsrequest.h"

namespace QtAws {
namespace IoT {

class ListThingPrincipalsRequest;

class ListThingPrincipalsRequestPrivate : public IoTRequestPrivate {

public:
    ListThingPrincipalsRequestPrivate(const IoTRequest::Action action,
                                   ListThingPrincipalsRequest * const q);
    ListThingPrincipalsRequestPrivate(const ListThingPrincipalsRequestPrivate &other,
                                   ListThingPrincipalsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListThingPrincipalsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
