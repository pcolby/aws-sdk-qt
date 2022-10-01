// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOURCELOCATIONSRESPONSE_P_H
#define QTAWS_LISTSOURCELOCATIONSRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class ListSourceLocationsResponse;

class ListSourceLocationsResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit ListSourceLocationsResponsePrivate(ListSourceLocationsResponse * const q);

    void parseListSourceLocationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSourceLocationsResponse)
    Q_DISABLE_COPY(ListSourceLocationsResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
