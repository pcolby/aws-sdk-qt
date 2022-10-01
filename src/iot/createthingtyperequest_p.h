// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETHINGTYPEREQUEST_P_H
#define QTAWS_CREATETHINGTYPEREQUEST_P_H

#include "iotrequest_p.h"
#include "createthingtyperequest.h"

namespace QtAws {
namespace IoT {

class CreateThingTypeRequest;

class CreateThingTypeRequestPrivate : public IoTRequestPrivate {

public:
    CreateThingTypeRequestPrivate(const IoTRequest::Action action,
                                   CreateThingTypeRequest * const q);
    CreateThingTypeRequestPrivate(const CreateThingTypeRequestPrivate &other,
                                   CreateThingTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateThingTypeRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
