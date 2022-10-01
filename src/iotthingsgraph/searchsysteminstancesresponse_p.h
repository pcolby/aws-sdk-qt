// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSYSTEMINSTANCESRESPONSE_P_H
#define QTAWS_SEARCHSYSTEMINSTANCESRESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchSystemInstancesResponse;

class SearchSystemInstancesResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit SearchSystemInstancesResponsePrivate(SearchSystemInstancesResponse * const q);

    void parseSearchSystemInstancesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchSystemInstancesResponse)
    Q_DISABLE_COPY(SearchSystemInstancesResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
