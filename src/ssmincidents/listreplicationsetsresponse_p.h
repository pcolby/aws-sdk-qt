// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPLICATIONSETSRESPONSE_P_H
#define QTAWS_LISTREPLICATIONSETSRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class ListReplicationSetsResponse;

class ListReplicationSetsResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit ListReplicationSetsResponsePrivate(ListReplicationSetsResponse * const q);

    void parseListReplicationSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListReplicationSetsResponse)
    Q_DISABLE_COPY(ListReplicationSetsResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
