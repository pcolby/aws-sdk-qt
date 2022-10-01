// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTREAMINGSESSIONRESPONSE_H
#define QTAWS_STARTSTREAMINGSESSIONRESPONSE_H

#include "nimbleresponse.h"
#include "startstreamingsessionrequest.h"

namespace QtAws {
namespace Nimble {

class StartStreamingSessionResponsePrivate;

class QTAWSNIMBLE_EXPORT StartStreamingSessionResponse : public NimbleResponse {
    Q_OBJECT

public:
    StartStreamingSessionResponse(const StartStreamingSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartStreamingSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartStreamingSessionResponse)
    Q_DISABLE_COPY(StartStreamingSessionResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
