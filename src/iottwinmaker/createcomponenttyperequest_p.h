// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPONENTTYPEREQUEST_P_H
#define QTAWS_CREATECOMPONENTTYPEREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "createcomponenttyperequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class CreateComponentTypeRequest;

class CreateComponentTypeRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    CreateComponentTypeRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   CreateComponentTypeRequest * const q);
    CreateComponentTypeRequestPrivate(const CreateComponentTypeRequestPrivate &other,
                                   CreateComponentTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateComponentTypeRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
