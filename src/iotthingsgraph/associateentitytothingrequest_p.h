// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEENTITYTOTHINGREQUEST_P_H
#define QTAWS_ASSOCIATEENTITYTOTHINGREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "associateentitytothingrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class AssociateEntityToThingRequest;

class AssociateEntityToThingRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    AssociateEntityToThingRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   AssociateEntityToThingRequest * const q);
    AssociateEntityToThingRequestPrivate(const AssociateEntityToThingRequestPrivate &other,
                                   AssociateEntityToThingRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateEntityToThingRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
