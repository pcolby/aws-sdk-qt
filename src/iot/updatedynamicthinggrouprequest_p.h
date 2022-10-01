// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDYNAMICTHINGGROUPREQUEST_P_H
#define QTAWS_UPDATEDYNAMICTHINGGROUPREQUEST_P_H

#include "iotrequest_p.h"
#include "updatedynamicthinggrouprequest.h"

namespace QtAws {
namespace IoT {

class UpdateDynamicThingGroupRequest;

class UpdateDynamicThingGroupRequestPrivate : public IoTRequestPrivate {

public:
    UpdateDynamicThingGroupRequestPrivate(const IoTRequest::Action action,
                                   UpdateDynamicThingGroupRequest * const q);
    UpdateDynamicThingGroupRequestPrivate(const UpdateDynamicThingGroupRequestPrivate &other,
                                   UpdateDynamicThingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDynamicThingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
