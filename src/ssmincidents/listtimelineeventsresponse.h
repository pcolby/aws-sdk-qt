// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTIMELINEEVENTSRESPONSE_H
#define QTAWS_LISTTIMELINEEVENTSRESPONSE_H

#include "ssmincidentsresponse.h"
#include "listtimelineeventsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class ListTimelineEventsResponsePrivate;

class QTAWSSSMINCIDENTS_EXPORT ListTimelineEventsResponse : public SsmIncidentsResponse {
    Q_OBJECT

public:
    ListTimelineEventsResponse(const ListTimelineEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTimelineEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTimelineEventsResponse)
    Q_DISABLE_COPY(ListTimelineEventsResponse)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
