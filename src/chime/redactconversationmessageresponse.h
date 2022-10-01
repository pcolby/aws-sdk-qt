// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDACTCONVERSATIONMESSAGERESPONSE_H
#define QTAWS_REDACTCONVERSATIONMESSAGERESPONSE_H

#include "chimeresponse.h"
#include "redactconversationmessagerequest.h"

namespace QtAws {
namespace Chime {

class RedactConversationMessageResponsePrivate;

class QTAWSCHIME_EXPORT RedactConversationMessageResponse : public ChimeResponse {
    Q_OBJECT

public:
    RedactConversationMessageResponse(const RedactConversationMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RedactConversationMessageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RedactConversationMessageResponse)
    Q_DISABLE_COPY(RedactConversationMessageResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
