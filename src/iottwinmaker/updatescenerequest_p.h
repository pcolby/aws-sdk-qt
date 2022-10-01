// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCENEREQUEST_P_H
#define QTAWS_UPDATESCENEREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "updatescenerequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class UpdateSceneRequest;

class UpdateSceneRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    UpdateSceneRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   UpdateSceneRequest * const q);
    UpdateSceneRequestPrivate(const UpdateSceneRequestPrivate &other,
                                   UpdateSceneRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSceneRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
