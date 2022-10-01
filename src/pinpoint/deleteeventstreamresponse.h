// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTSTREAMRESPONSE_H
#define QTAWS_DELETEEVENTSTREAMRESPONSE_H

#include "pinpointresponse.h"
#include "deleteeventstreamrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteEventStreamResponsePrivate;

class QTAWSPINPOINT_EXPORT DeleteEventStreamResponse : public PinpointResponse {
    Q_OBJECT

public:
    DeleteEventStreamResponse(const DeleteEventStreamRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEventStreamRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventStreamResponse)
    Q_DISABLE_COPY(DeleteEventStreamResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
