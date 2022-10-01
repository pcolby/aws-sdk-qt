// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELREPLAYRESPONSE_H
#define QTAWS_CANCELREPLAYRESPONSE_H

#include "eventbridgeresponse.h"
#include "cancelreplayrequest.h"

namespace QtAws {
namespace EventBridge {

class CancelReplayResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT CancelReplayResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    CancelReplayResponse(const CancelReplayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelReplayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelReplayResponse)
    Q_DISABLE_COPY(CancelReplayResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
