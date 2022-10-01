// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGSESSIONRESPONSE_H
#define QTAWS_CREATESTREAMINGSESSIONRESPONSE_H

#include "nimbleresponse.h"
#include "createstreamingsessionrequest.h"

namespace QtAws {
namespace Nimble {

class CreateStreamingSessionResponsePrivate;

class QTAWSNIMBLE_EXPORT CreateStreamingSessionResponse : public NimbleResponse {
    Q_OBJECT

public:
    CreateStreamingSessionResponse(const CreateStreamingSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStreamingSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStreamingSessionResponse)
    Q_DISABLE_COPY(CreateStreamingSessionResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
