// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESPONSEPLANSRESPONSE_P_H
#define QTAWS_LISTRESPONSEPLANSRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class ListResponsePlansResponse;

class ListResponsePlansResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit ListResponsePlansResponsePrivate(ListResponsePlansResponse * const q);

    void parseListResponsePlansResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResponsePlansResponse)
    Q_DISABLE_COPY(ListResponsePlansResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
