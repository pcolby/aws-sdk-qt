// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOMPONENTTYPEREQUEST_P_H
#define QTAWS_UPDATECOMPONENTTYPEREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "updatecomponenttyperequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class UpdateComponentTypeRequest;

class UpdateComponentTypeRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    UpdateComponentTypeRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   UpdateComponentTypeRequest * const q);
    UpdateComponentTypeRequestPrivate(const UpdateComponentTypeRequestPrivate &other,
                                   UpdateComponentTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateComponentTypeRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
