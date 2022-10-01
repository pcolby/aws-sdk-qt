// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCHANNELMESSAGERESPONSE_H
#define QTAWS_SENDCHANNELMESSAGERESPONSE_H

#include "chimeresponse.h"
#include "sendchannelmessagerequest.h"

namespace QtAws {
namespace Chime {

class SendChannelMessageResponsePrivate;

class QTAWSCHIME_EXPORT SendChannelMessageResponse : public ChimeResponse {
    Q_OBJECT

public:
    SendChannelMessageResponse(const SendChannelMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendChannelMessageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendChannelMessageResponse)
    Q_DISABLE_COPY(SendChannelMessageResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
