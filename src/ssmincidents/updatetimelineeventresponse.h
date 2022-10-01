// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETIMELINEEVENTRESPONSE_H
#define QTAWS_UPDATETIMELINEEVENTRESPONSE_H

#include "ssmincidentsresponse.h"
#include "updatetimelineeventrequest.h"

namespace QtAws {
namespace SsmIncidents {

class UpdateTimelineEventResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT UpdateTimelineEventResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    UpdateTimelineEventResponse(const UpdateTimelineEventRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateTimelineEventRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTimelineEventResponse)
    Q_DISABLE_COPY(UpdateTimelineEventResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
