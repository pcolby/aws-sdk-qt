// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCENEREQUEST_P_H
#define QTAWS_GETSCENEREQUEST_P_H

#include "iottwinmakerrequest_p.h"
#include "getscenerequest.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetSceneRequest;

class GetSceneRequestPrivate : public IoTTwinMakerRequestPrivate {

public:
    GetSceneRequestPrivate(const IoTTwinMakerRequest::Action action,
                                   GetSceneRequest * const q);
    GetSceneRequestPrivate(const GetSceneRequestPrivate &other,
                                   GetSceneRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSceneRequest)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
