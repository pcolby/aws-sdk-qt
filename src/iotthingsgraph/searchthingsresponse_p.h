// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHTHINGSRESPONSE_P_H
#define QTAWS_SEARCHTHINGSRESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchThingsResponse;

class SearchThingsResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit SearchThingsResponsePrivate(SearchThingsResponse * const q);

    void parseSearchThingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchThingsResponse)
    Q_DISABLE_COPY(SearchThingsResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
