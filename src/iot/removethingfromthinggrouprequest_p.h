// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVETHINGFROMTHINGGROUPREQUEST_P_H
#define QTAWS_REMOVETHINGFROMTHINGGROUPREQUEST_P_H

#include "iotrequest_p.h"
#include "removethingfromthinggrouprequest.h"

namespace QtAws {
namespace IoT {

class RemoveThingFromThingGroupRequest;

class RemoveThingFromThingGroupRequestPrivate : public IoTRequestPrivate {

public:
    RemoveThingFromThingGroupRequestPrivate(const IoTRequest::Action action,
                                   RemoveThingFromThingGroupRequest * const q);
    RemoveThingFromThingGroupRequestPrivate(const RemoveThingFromThingGroupRequestPrivate &other,
                                   RemoveThingFromThingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveThingFromThingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
