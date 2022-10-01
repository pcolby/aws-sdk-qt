// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINCIDENTRECORDRESPONSE_P_H
#define QTAWS_DELETEINCIDENTRECORDRESPONSE_P_H

#include "ssmincidentsresponse_p.h"

namespace QtAws {
namespace SsmIncidents {

class DeleteIncidentRecordResponse;

class DeleteIncidentRecordResponsePrivate : public SsmIncidentsResponsePrivate {

public:

    explicit DeleteIncidentRecordResponsePrivate(DeleteIncidentRecordResponse * const q);

    void parseDeleteIncidentRecordResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteIncidentRecordResponse)
    Q_DISABLE_COPY(DeleteIncidentRecordResponsePrivate)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
