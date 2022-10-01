// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEBOTRESPONSE_H
#define QTAWS_DISASSOCIATEBOTRESPONSE_H

#include "connectresponse.h"
#include "disassociatebotrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateBotResponsePrivate;

class QTAWSCONNECT_EXPORT DisassociateBotResponse : public ConnectResponse {
    Q_OBJECT

public:
    DisassociateBotResponse(const DisassociateBotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateBotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateBotResponse)
    Q_DISABLE_COPY(DisassociateBotResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
