// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHINGGROUPREQUEST_P_H
#define QTAWS_UPDATETHINGGROUPREQUEST_P_H

#include "iotrequest_p.h"
#include "updatethinggrouprequest.h"

namespace QtAws {
namespace IoT {

class UpdateThingGroupRequest;

class UpdateThingGroupRequestPrivate : public IoTRequestPrivate {

public:
    UpdateThingGroupRequestPrivate(const IoTRequest::Action action,
                                   UpdateThingGroupRequest * const q);
    UpdateThingGroupRequestPrivate(const UpdateThingGroupRequestPrivate &other,
                                   UpdateThingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateThingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
