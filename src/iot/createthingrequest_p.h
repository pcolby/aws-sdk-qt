// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHINGREQUEST_P_H
#define QTAWS_CREATETHINGREQUEST_P_H

#include "iotrequest_p.h"
#include "createthingrequest.h"

namespace QtAws {
namespace IoT {

class CreateThingRequest;

class CreateThingRequestPrivate : public IoTRequestPrivate {

public:
    CreateThingRequestPrivate(const IoTRequest::Action action,
                                   CreateThingRequest * const q);
    CreateThingRequestPrivate(const CreateThingRequestPrivate &other,
                                   CreateThingRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateThingRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
