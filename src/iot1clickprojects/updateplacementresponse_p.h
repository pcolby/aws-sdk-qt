// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPLACEMENTRESPONSE_P_H
#define QTAWS_UPDATEPLACEMENTRESPONSE_P_H

#include "iot1clickprojectsresponse_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

class UpdatePlacementResponse;

class UpdatePlacementResponsePrivate : public IoT1ClickProjectsResponsePrivate {

public:

    explicit UpdatePlacementResponsePrivate(UpdatePlacementResponse * const q);

    void parseUpdatePlacementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePlacementResponse)
    Q_DISABLE_COPY(UpdatePlacementResponsePrivate)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
