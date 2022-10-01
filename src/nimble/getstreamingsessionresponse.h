// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMINGSESSIONRESPONSE_H
#define QTAWS_GETSTREAMINGSESSIONRESPONSE_H

#include "nimbleresponse.h"
#include "getstreamingsessionrequest.h"

namespace QtAws {
namespace Nimble {

class GetStreamingSessionResponsePrivate;

class QTAWSNIMBLE_EXPORT GetStreamingSessionResponse : public NimbleResponse {
    Q_OBJECT

public:
    GetStreamingSessionResponse(const GetStreamingSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetStreamingSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStreamingSessionResponse)
    Q_DISABLE_COPY(GetStreamingSessionResponse)

};

} // namespace Nimble
} // namespace QtAws

#endif
