// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETIMELINEEVENTRESPONSE_H
#define QTAWS_DELETETIMELINEEVENTRESPONSE_H

#include "ssmincidentsresponse.h"
#include "deletetimelineeventrequest.h"

namespace QtAws {
namespace SsmIncidents {

class DeleteTimelineEventResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT DeleteTimelineEventResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    DeleteTimelineEventResponse(const DeleteTimelineEventRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTimelineEventRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTimelineEventResponse)
    Q_DISABLE_COPY(DeleteTimelineEventResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
