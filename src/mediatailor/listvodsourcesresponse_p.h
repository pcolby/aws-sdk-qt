// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVODSOURCESRESPONSE_P_H
#define QTAWS_LISTVODSOURCESRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class ListVodSourcesResponse;

class ListVodSourcesResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit ListVodSourcesResponsePrivate(ListVodSourcesResponse * const q);

    void parseListVodSourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListVodSourcesResponse)
    Q_DISABLE_COPY(ListVodSourcesResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
