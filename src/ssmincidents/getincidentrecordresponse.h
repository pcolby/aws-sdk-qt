// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINCIDENTRECORDRESPONSE_H
#define QTAWS_GETINCIDENTRECORDRESPONSE_H

#include "ssmincidentsresponse.h"
#include "getincidentrecordrequest.h"

namespace QtAws {
namespace SsmIncidents {

class GetIncidentRecordResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT GetIncidentRecordResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    GetIncidentRecordResponse(const GetIncidentRecordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIncidentRecordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIncidentRecordResponse)
    Q_DISABLE_COPY(GetIncidentRecordResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
