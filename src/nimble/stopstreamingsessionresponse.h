// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTREAMINGSESSIONRESPONSE_H
#define QTAWS_STOPSTREAMINGSESSIONRESPONSE_H

#include "nimbleresponse.h"
#include "stopstreamingsessionrequest.h"

namespace QtAws {
namespace Nimble {

class StopStreamingSessionResponsePrivate;

class QTAWSNIMBLE_EXPORT StopStreamingSessionResponse : public NimbleResponse {
    Q_OBJECT

public:
    StopStreamingSessionResponse(const StopStreamingSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopStreamingSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopStreamingSessionResponse)
    Q_DISABLE_COPY(StopStreamingSessionResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
