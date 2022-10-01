// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTSTREAMRESPONSE_H
#define QTAWS_GETEVENTSTREAMRESPONSE_H

#include "pinpointresponse.h"
#include "geteventstreamrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetEventStreamResponsePrivate;

class QTAWSPINPOINT_EXPORT GetEventStreamResponse : public PinpointResponse {
    Q_OBJECT

public:
    GetEventStreamResponse(const GetEventStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEventStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventStreamResponse)
    Q_DISABLE_COPY(GetEventStreamResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
