// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSRESPONSE_H
#define QTAWS_PUTEVENTSRESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "puteventsrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class PutEventsResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT PutEventsResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    PutEventsResponse(const PutEventsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutEventsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEventsResponse)
    Q_DISABLE_COPY(PutEventsResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
