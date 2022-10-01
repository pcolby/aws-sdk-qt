// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLAYRESPONSE_H
#define QTAWS_STARTREPLAYRESPONSE_H

#include "cloudwatcheventsresponse.h"
#include "startreplayrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class StartReplayResponsePrivate;

class QTAWSCLOUDWATCHEVENTS_EXPORT StartReplayResponse : public CloudWatchEventsResponse {
    Q_OBJECT

public:
    StartReplayResponse(const StartReplayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartReplayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartReplayResponse)
    Q_DISABLE_COPY(StartReplayResponse)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
