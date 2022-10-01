// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPLACEMENTSRESPONSE_P_H
#define QTAWS_LISTPLACEMENTSRESPONSE_P_H

#include "iot1clickprojectsresponse_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

class ListPlacementsResponse;

class ListPlacementsResponsePrivate : public IoT1ClickProjectsResponsePrivate {

public:

    explicit ListPlacementsResponsePrivate(ListPlacementsResponse * const q);

    void parseListPlacementsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPlacementsResponse)
    Q_DISABLE_COPY(ListPlacementsResponsePrivate)

};

} // namespace IoT1ClickProjects
} // namespace QtAws

#endif
