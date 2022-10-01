// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPREFETCHSCHEDULESRESPONSE_P_H
#define QTAWS_LISTPREFETCHSCHEDULESRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class ListPrefetchSchedulesResponse;

class ListPrefetchSchedulesResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit ListPrefetchSchedulesResponsePrivate(ListPrefetchSchedulesResponse * const q);

    void parseListPrefetchSchedulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPrefetchSchedulesResponse)
    Q_DISABLE_COPY(ListPrefetchSchedulesResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
