// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLACEMENTRESPONSE_P_H
#define QTAWS_DELETEPLACEMENTRESPONSE_P_H

#include "iot1clickprojectsresponse_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

class DeletePlacementResponse;

class DeletePlacementResponsePrivate : public IoT1ClickProjectsResponsePrivate {

public:

    explicit DeletePlacementResponsePrivate(DeletePlacementResponse * const q);

    void parseDeletePlacementResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePlacementResponse)
    Q_DISABLE_COPY(DeletePlacementResponsePrivate)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
