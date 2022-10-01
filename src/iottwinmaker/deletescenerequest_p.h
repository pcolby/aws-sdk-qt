// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCENEREQUEST_P_H
#define QTAWS_DELETESCENEREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "deletescenerequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class DeleteSceneRequest;

class DeleteSceneRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    DeleteSceneRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   DeleteSceneRequest * const q);
    DeleteSceneRequestPrivate(const DeleteSceneRequestPrivate &other,
                                   DeleteSceneRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSceneRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
