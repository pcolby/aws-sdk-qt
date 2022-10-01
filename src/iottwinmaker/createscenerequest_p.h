// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCENEREQUEST_P_H
#define QTAWS_CREATESCENEREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "createscenerequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class CreateSceneRequest;

class CreateSceneRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    CreateSceneRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   CreateSceneRequest * const q);
    CreateSceneRequestPrivate(const CreateSceneRequestPrivate &other,
                                   CreateSceneRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSceneRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
