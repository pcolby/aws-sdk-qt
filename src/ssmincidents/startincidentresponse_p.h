// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINCIDENTRESPONSE_P_H
#define QTAWS_STARTINCIDENTRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class StartIncidentResponse;

class StartIncidentResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit StartIncidentResponsePrivate(StartIncidentResponse * const q);

    void parseStartIncidentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartIncidentResponse)
    Q_DISABLE_COPY(StartIncidentResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
