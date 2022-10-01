// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALERTSRESPONSE_P_H
#define QTAWS_LISTALERTSRESPONSE_P_H

#include "mediatailorresponse_p.h"

namespace QtAws {
namespace MediaTailor {

class ListAlertsResponse;

class ListAlertsResponsePrivate : public MediaTailorResponsePrivate {

public:

    explicit ListAlertsResponsePrivate(ListAlertsResponse * const q);

    void parseListAlertsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAlertsResponse)
    Q_DISABLE_COPY(ListAlertsResponsePrivate)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
