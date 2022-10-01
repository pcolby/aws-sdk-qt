// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLIVESOURCESRESPONSE_P_H
#define QTAWS_LISTLIVESOURCESRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class ListLiveSourcesResponse;

class ListLiveSourcesResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit ListLiveSourcesResponsePrivate(ListLiveSourcesResponse * const q);

    void parseListLiveSourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLiveSourcesResponse)
    Q_DISABLE_COPY(ListLiveSourcesResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
