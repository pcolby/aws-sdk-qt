// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINCIDENTRECORDRESPONSE_H
#define QTAWS_DELETEINCIDENTRECORDRESPONSE_H

#include "ssmincidentsresponse.h"
#include "deleteincidentrecordrequest.h"

namespace QtAws {
namespace SsmIncidents {

class DeleteIncidentRecordResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT DeleteIncidentRecordResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    DeleteIncidentRecordResponse(const DeleteIncidentRecordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIncidentRecordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIncidentRecordResponse)
    Q_DISABLE_COPY(DeleteIncidentRecordResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
