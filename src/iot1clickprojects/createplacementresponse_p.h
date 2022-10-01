// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLACEMENTRESPONSE_P_H
#define QTAWS_CREATEPLACEMENTRESPONSE_P_H

#include "iot1clickprojectsresponse_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

class CreatePlacementResponse;

class CreatePlacementResponsePrivate : public IoT1ClickProjectsResponsePrivate {

public:

    explicit CreatePlacementResponsePrivate(CreatePlacementResponse * const q);

    void parseCreatePlacementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreatePlacementResponse)
    Q_DISABLE_COPY(CreatePlacementResponsePrivate)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
