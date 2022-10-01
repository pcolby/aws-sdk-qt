// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTIMELINEEVENTRESPONSE_H
#define QTAWS_GETTIMELINEEVENTRESPONSE_H

#include "ssmincidentsresponse.h"
#include "gettimelineeventrequest.h"

namespace QtAws {
namespace SsmIncidents {

class GetTimelineEventResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT GetTimelineEventResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    GetTimelineEventResponse(const GetTimelineEventRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTimelineEventRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTimelineEventResponse)
    Q_DISABLE_COPY(GetTimelineEventResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
