// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTBUSESRESPONSE_H
#define QTAWS_LISTEVENTBUSESRESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "listeventbusesrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListEventBusesResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT ListEventBusesResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    ListEventBusesResponse(const ListEventBusesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEventBusesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventBusesResponse)
    Q_DISABLE_COPY(ListEventBusesResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
