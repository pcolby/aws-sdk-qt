// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDACTROOMMESSAGERESPONSE_H
#define QTAWS_REDACTROOMMESSAGERESPONSE_H

#include "chimeresponse.h"
#include "redactroommessagerequest.h"

namespace QtAws {
namespace Chime {

class RedactRoomMessageResponsePrivate;

class QTAWSCHIME_EXPORT RedactRoomMessageResponse : public ChimeResponse {
    Q_OBJECT

public:
    RedactRoomMessageResponse(const RedactRoomMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RedactRoomMessageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RedactRoomMessageResponse)
    Q_DISABLE_COPY(RedactRoomMessageResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
