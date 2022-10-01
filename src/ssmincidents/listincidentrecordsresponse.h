// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINCIDENTRECORDSRESPONSE_H
#define QTAWS_LISTINCIDENTRECORDSRESPONSE_H

#include "ssmincidentsresponse.h"
#include "listincidentrecordsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class ListIncidentRecordsResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT ListIncidentRecordsResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    ListIncidentRecordsResponse(const ListIncidentRecordsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListIncidentRecordsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListIncidentRecordsResponse)
    Q_DISABLE_COPY(ListIncidentRecordsResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
