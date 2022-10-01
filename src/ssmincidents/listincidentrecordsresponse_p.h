// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINCIDENTRECORDSRESPONSE_P_H
#define QTAWS_LISTINCIDENTRECORDSRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class ListIncidentRecordsResponse;

class ListIncidentRecordsResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit ListIncidentRecordsResponsePrivate(ListIncidentRecordsResponse * const q);

    void parseListIncidentRecordsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIncidentRecordsResponse)
    Q_DISABLE_COPY(ListIncidentRecordsResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
