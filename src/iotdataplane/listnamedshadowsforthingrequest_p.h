// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNAMEDSHADOWSFORTHINGREQUEST_P_H
#define QTAWS_LISTNAMEDSHADOWSFORTHINGREQUEST_P_H

#include "iotdataplanerequest_p.h"
#include "listnamedshadowsforthingrequest.h"

namespace QtAws {
namespace IoTDataPlane {

class ListNamedShadowsForThingRequest;

class ListNamedShadowsForThingRequestPrivate : public IoTDataPlaneRequestPrivate {

public:
    ListNamedShadowsForThingRequestPrivate(const IoTDataPlaneRequest::Action action,
                                   ListNamedShadowsForThingRequest * const q);
    ListNamedShadowsForThingRequestPrivate(const ListNamedShadowsForThingRequestPrivate &other,
                                   ListNamedShadowsForThingRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNamedShadowsForThingRequest)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
