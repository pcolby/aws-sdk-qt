// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENTITYREQUEST_P_H
#define QTAWS_UPDATEENTITYREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "updateentityrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class UpdateEntityRequest;

class UpdateEntityRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    UpdateEntityRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   UpdateEntityRequest * const q);
    UpdateEntityRequestPrivate(const UpdateEntityRequestPrivate &other,
                                   UpdateEntityRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEntityRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
