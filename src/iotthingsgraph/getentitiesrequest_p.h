// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENTITIESREQUEST_P_H
#define QTAWS_GETENTITIESREQUEST_P_H

#include "iotthingsgraphrequest_p.h"
#include "getentitiesrequest.h"

namespace QtAws {
namespace IoTThingsGraph {

class GetEntitiesRequest;

class GetEntitiesRequestPrivate : public IoTThingsGraphRequestPrivate {

public:
    GetEntitiesRequestPrivate(const IoTThingsGraphRequest::Action action,
                                   GetEntitiesRequest * const q);
    GetEntitiesRequestPrivate(const GetEntitiesRequestPrivate &other,
                                   GetEntitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEntitiesRequest)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
