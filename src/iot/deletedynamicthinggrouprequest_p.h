// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDYNAMICTHINGGROUPREQUEST_P_H
#define QTAWS_DELETEDYNAMICTHINGGROUPREQUEST_P_H

#include "iotrequest_p.h"
#include "deletedynamicthinggrouprequest.h"

namespace QtAws {
namespace IoT {

class DeleteDynamicThingGroupRequest;

class DeleteDynamicThingGroupRequestPrivate : public IoTRequestPrivate {

public:
    DeleteDynamicThingGroupRequestPrivate(const IoTRequest::Action action,
                                   DeleteDynamicThingGroupRequest * const q);
    DeleteDynamicThingGroupRequestPrivate(const DeleteDynamicThingGroupRequestPrivate &other,
                                   DeleteDynamicThingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDynamicThingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
