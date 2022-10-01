// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDACTCHANNELMESSAGERESPONSE_H
#define QTAWS_REDACTCHANNELMESSAGERESPONSE_H

#include "chimeresponse.h"
#include "redactchannelmessagerequest.h"

namespace QtAws {
namespace Chime {

class RedactChannelMessageResponsePrivate;

class QTAWSCHIME_EXPORT RedactChannelMessageResponse : public ChimeResponse {
    Q_OBJECT

public:
    RedactChannelMessageResponse(const RedactChannelMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RedactChannelMessageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RedactChannelMessageResponse)
    Q_DISABLE_COPY(RedactChannelMessageResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
