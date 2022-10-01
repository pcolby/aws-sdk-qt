// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSTREAMRESPONSE_H
#define QTAWS_PUTEVENTSTREAMRESPONSE_H

#include "pinpointresponse.h"
#include "puteventstreamrequest.h"

namespace QtAws {
namespace Pinpoint {

class PutEventStreamResponsePrivate;

class QTAWSPINPOINT_EXPORT PutEventStreamResponse : public PinpointResponse {
    Q_OBJECT

public:
    PutEventStreamResponse(const PutEventStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutEventStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEventStreamResponse)
    Q_DISABLE_COPY(PutEventStreamResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
