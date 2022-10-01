// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINCIDENTRECORDRESPONSE_H
#define QTAWS_UPDATEINCIDENTRECORDRESPONSE_H

#include "ssmincidentsresponse.h"
#include "updateincidentrecordrequest.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateIncidentRecordResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT UpdateIncidentRecordResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    UpdateIncidentRecordResponse(const UpdateIncidentRecordRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateIncidentRecordRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIncidentRecordResponse)
    Q_DISABLE_COPY(UpdateIncidentRecordResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
