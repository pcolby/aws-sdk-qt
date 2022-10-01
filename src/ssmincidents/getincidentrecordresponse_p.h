// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINCIDENTRECORDRESPONSE_P_H
#define QTAWS_GETINCIDENTRECORDRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class GetIncidentRecordResponse;

class GetIncidentRecordResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit GetIncidentRecordResponsePrivate(GetIncidentRecordResponse * const q);

    void parseGetIncidentRecordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIncidentRecordResponse)
    Q_DISABLE_COPY(GetIncidentRecordResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
