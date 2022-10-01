// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCENERESPONSE_P_H
#define QTAWS_GETSCENERESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class GetSceneResponse;

class GetSceneResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit GetSceneResponsePrivate(GetSceneResponse * const q);

    void parseGetSceneResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSceneResponse)
    Q_DISABLE_COPY(GetSceneResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
