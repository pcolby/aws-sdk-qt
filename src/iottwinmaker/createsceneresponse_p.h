// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCENERESPONSE_P_H
#define QTAWS_CREATESCENERESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class CreateSceneResponse;

class CreateSceneResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit CreateSceneResponsePrivate(CreateSceneResponse * const q);

    void parseCreateSceneResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSceneResponse)
    Q_DISABLE_COPY(CreateSceneResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
