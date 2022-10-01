// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMAPSRESPONSE_P_H
#define QTAWS_LISTMAPSRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class ListMapsResponse;

class ListMapsResponsePrivate : public LocationResponsePrivate {

public:

    explicit ListMapsResponsePrivate(ListMapsResponse * const q);

    void parseListMapsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMapsResponse)
    Q_DISABLE_COPY(ListMapsResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
