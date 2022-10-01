// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGSESSIONSTREAMRESPONSE_H
#define QTAWS_CREATESTREAMINGSESSIONSTREAMRESPONSE_H

#include "nimbleresponse.h"
#include "createstreamingsessionstreamrequest.h"

namespace QtAws {
namespace Nimble {

class CreateStreamingSessionStreamResponsePrivate;

class QTAWSNIMBLE_EXPORT CreateStreamingSessionStreamResponse : public NimbleResponse {
    Q_OBJECT

public:
    CreateStreamingSessionStreamResponse(const CreateStreamingSessionStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStreamingSessionStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStreamingSessionStreamResponse)
    Q_DISABLE_COPY(CreateStreamingSessionStreamResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
