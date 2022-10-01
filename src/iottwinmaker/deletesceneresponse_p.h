// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCENERESPONSE_P_H
#define QTAWS_DELETESCENERESPONSE_P_H

#include "iottwinmakerresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class DeleteSceneResponse;

class DeleteSceneResponsePrivate : public IoTTwinMakerResponsePrivate {

public:

    explicit DeleteSceneResponsePrivate(DeleteSceneResponse * const q);

    void parseDeleteSceneResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSceneResponse)
    Q_DISABLE_COPY(DeleteSceneResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
