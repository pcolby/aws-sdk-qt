// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELEXBOTRESPONSE_H
#define QTAWS_DISASSOCIATELEXBOTRESPONSE_H

#include "connectresponse.h"
#include "disassociatelexbotrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateLexBotResponsePrivate;

class QTAWSCONNECT_EXPORT DisassociateLexBotResponse : public ConnectResponse {
    Q_OBJECT

public:
    DisassociateLexBotResponse(const DisassociateLexBotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateLexBotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateLexBotResponse)
    Q_DISABLE_COPY(DisassociateLexBotResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
