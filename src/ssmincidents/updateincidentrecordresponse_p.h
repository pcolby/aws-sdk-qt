// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINCIDENTRECORDRESPONSE_P_H
#define QTAWS_UPDATEINCIDENTRECORDRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateIncidentRecordResponse;

class UpdateIncidentRecordResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit UpdateIncidentRecordResponsePrivate(UpdateIncidentRecordResponse * const q);

    void parseUpdateIncidentRecordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateIncidentRecordResponse)
    Q_DISABLE_COPY(UpdateIncidentRecordResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
