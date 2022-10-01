// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDYNAMICTHINGGROUPREQUEST_P_H
#define QTAWS_CREATEDYNAMICTHINGGROUPREQUEST_P_H

#include "iotrequest_p.h"
#include "createdynamicthinggrouprequest.h"

namespace QtAws {
namespace IoT {

class CreateDynamicThingGroupRequest;

class CreateDynamicThingGroupRequestPrivate : public IoTRequestPrivate {

public:
    CreateDynamicThingGroupRequestPrivate(const IoTRequest::Action action,
                                   CreateDynamicThingGroupRequest * const q);
    CreateDynamicThingGroupRequestPrivate(const CreateDynamicThingGroupRequestPrivate &other,
                                   CreateDynamicThingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDynamicThingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
