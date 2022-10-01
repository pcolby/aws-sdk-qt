// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLAYRESPONSE_H
#define QTAWS_STARTREPLAYRESPONSE_H

#include "eventbridgeresponse.h"
#include "startreplayrequest.h"

namespace QtAws {
namespace EventBridge {

class StartReplayResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT StartReplayResponse : public EventBridgeResponse {
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

} // namespace EventBridge
} // namespace QtAws

#endif
