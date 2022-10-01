// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTBUSRESPONSE_H
#define QTAWS_DELETEEVENTBUSRESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "deleteeventbusrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class DeleteEventBusResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT DeleteEventBusResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    DeleteEventBusResponse(const DeleteEventBusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEventBusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventBusResponse)
    Q_DISABLE_COPY(DeleteEventBusResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
