// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINCIDENTRESPONSE_H
#define QTAWS_STARTINCIDENTRESPONSE_H

#include "ssmincidentsresponse.h"
#include "startincidentrequest.h"

namespace QtAws {
namespace SsmIncidents {

class StartIncidentResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT StartIncidentResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    StartIncidentResponse(const StartIncidentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartIncidentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartIncidentResponse)
    Q_DISABLE_COPY(StartIncidentResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
