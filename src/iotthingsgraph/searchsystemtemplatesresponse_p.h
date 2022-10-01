// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSYSTEMTEMPLATESRESPONSE_P_H
#define QTAWS_SEARCHSYSTEMTEMPLATESRESPONSE_P_H

#include "iotthingsgraphresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class SearchSystemTemplatesResponse;

class SearchSystemTemplatesResponsePrivate : public IoTThingsGraphResponsePrivate {

public:

    explicit SearchSystemTemplatesResponsePrivate(SearchSystemTemplatesResponse * const q);

    void parseSearchSystemTemplatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SearchSystemTemplatesResponse)
    Q_DISABLE_COPY(SearchSystemTemplatesResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
