// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISSOCIATEENTITYFROMTHINGREQUEST_P_H
#define QTAWS_DISSOCIATEENTITYFROMTHINGREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "dissociateentityfromthingrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class DissociateEntityFromThingRequest;

class DissociateEntityFromThingRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    DissociateEntityFromThingRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   DissociateEntityFromThingRequest * const q);
    DissociateEntityFromThingRequestPrivate(const DissociateEntityFromThingRequestPrivate &other,
                                   DissociateEntityFromThingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DissociateEntityFromThingRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
