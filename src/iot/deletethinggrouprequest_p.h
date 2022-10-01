// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETHINGGROUPREQUEST_P_H
#define QTAWS_DELETETHINGGROUPREQUEST_P_H

#include "iotrequest_p.h"
#include "deletethinggrouprequest.h"

namespace QtAws {
namespace IoT {

class DeleteThingGroupRequest;

class DeleteThingGroupRequestPrivate : public IoTRequestPrivate {

public:
    DeleteThingGroupRequestPrivate(const IoTRequest::Action action,
                                   DeleteThingGroupRequest * const q);
    DeleteThingGroupRequestPrivate(const DeleteThingGroupRequestPrivate &other,
                                   DeleteThingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteThingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
