// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCENERESPONSE_P_H
#define QTAWS_UPDATESCENERESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class UpdateSceneResponse;

class UpdateSceneResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit UpdateSceneResponsePrivate(UpdateSceneResponse * const q);

    void parseUpdateSceneResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSceneResponse)
    Q_DISABLE_COPY(UpdateSceneResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
