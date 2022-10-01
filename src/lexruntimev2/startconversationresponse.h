// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONVERSATIONRESPONSE_H
#define QTAWS_STARTCONVERSATIONRESPONSE_H

#include "lexruntimev2response.h"
#include "startconversationrequest.h"

namespace QtAws {
namespace LexRuntimeV2 {

class StartConversationResponsePrivate;

class QTAWSLEXRUNTIMEV2_EXPORT StartConversationResponse : public LexRuntimeV2Response {
    Q_OBJECT

public:
    StartConversationResponse(const StartConversationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartConversationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartConversationResponse)
    Q_DISABLE_COPY(StartConversationResponse)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
