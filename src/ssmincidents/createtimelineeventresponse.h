// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETIMELINEEVENTRESPONSE_H
#define QTAWS_CREATETIMELINEEVENTRESPONSE_H

#include "ssmincidentsresponse.h"
#include "createtimelineeventrequest.h"

namespace QtAws {
namespace SsmIncidents {

class CreateTimelineEventResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT CreateTimelineEventResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    CreateTimelineEventResponse(const CreateTimelineEventRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTimelineEventRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTimelineEventResponse)
    Q_DISABLE_COPY(CreateTimelineEventResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
