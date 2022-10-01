// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHINGGROUPREQUEST_P_H
#define QTAWS_CREATETHINGGROUPREQUEST_P_H

#include "iotrequest_p.h"
#include "createthinggrouprequest.h"

namespace QtAws {
namespace IoT {

class CreateThingGroupRequest;

class CreateThingGroupRequestPrivate : public IoTRequestPrivate {

public:
    CreateThingGroupRequestPrivate(const IoTRequest::Action action,
                                   CreateThingGroupRequest * const q);
    CreateThingGroupRequestPrivate(const CreateThingGroupRequestPrivate &other,
                                   CreateThingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateThingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
