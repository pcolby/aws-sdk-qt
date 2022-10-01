// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENTITYREQUEST_P_H
#define QTAWS_CREATEENTITYREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "createentityrequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class CreateEntityRequest;

class CreateEntityRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    CreateEntityRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   CreateEntityRequest * const q);
    CreateEntityRequestPrivate(const CreateEntityRequestPrivate &other,
                                   CreateEntityRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEntityRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
