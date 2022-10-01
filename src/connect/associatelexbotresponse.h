// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATELEXBOTRESPONSE_H
#define QTAWS_ASSOCIATELEXBOTRESPONSE_H

#include "connectresponse.h"
#include "associatelexbotrequest.h"

namespace QtAws {
namespace Connect {

class AssociateLexBotResponsePrivate;

class QTAWSCONNECT_EXPORT AssociateLexBotResponse : public ConnectResponse {
    Q_OBJECT

public:
    AssociateLexBotResponse(const AssociateLexBotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateLexBotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateLexBotResponse)
    Q_DISABLE_COPY(AssociateLexBotResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
