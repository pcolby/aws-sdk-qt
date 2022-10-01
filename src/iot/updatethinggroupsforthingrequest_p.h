// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHINGGROUPSFORTHINGREQUEST_P_H
#define QTAWS_UPDATETHINGGROUPSFORTHINGREQUEST_P_H

#include "iotrequest_p.h"
#include "updatethinggroupsforthingrequest.h"

namespace QtAws {
namespace IoT {

class UpdateThingGroupsForThingRequest;

class UpdateThingGroupsForThingRequestPrivate : public IoTRequestPrivate {

public:
    UpdateThingGroupsForThingRequestPrivate(const IoTRequest::Action action,
                                   UpdateThingGroupsForThingRequest * const q);
    UpdateThingGroupsForThingRequestPrivate(const UpdateThingGroupsForThingRequestPrivate &other,
                                   UpdateThingGroupsForThingRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateThingGroupsForThingRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
