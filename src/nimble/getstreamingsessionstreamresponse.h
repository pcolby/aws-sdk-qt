// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMINGSESSIONSTREAMRESPONSE_H
#define QTAWS_GETSTREAMINGSESSIONSTREAMRESPONSE_H

#include "nimbleresponse.h"
#include "getstreamingsessionstreamrequest.h"

namespace QtAws {
namespace Nimble {

class GetStreamingSessionStreamResponsePrivate;

class QTAWSNIMBLE_EXPORT GetStreamingSessionStreamResponse : public NimbleResponse {
    Q_OBJECT

public:
    GetStreamingSessionStreamResponse(const GetStreamingSessionStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStreamingSessionStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStreamingSessionStreamResponse)
    Q_DISABLE_COPY(GetStreamingSessionStreamResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
