// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETHINGREQUEST_P_H
#define QTAWS_UPDATETHINGREQUEST_P_H

#include "iotrequest_p.h"
#include "updatethingrequest.h"

namespace QtAws {
namespace IoT {

class UpdateThingRequest;

class UpdateThingRequestPrivate : public IoTRequestPrivate {

public:
    UpdateThingRequestPrivate(const IoTRequest::Action action,
                                   UpdateThingRequest * const q);
    UpdateThingRequestPrivate(const UpdateThingRequestPrivate &other,
                                   UpdateThingRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateThingRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
