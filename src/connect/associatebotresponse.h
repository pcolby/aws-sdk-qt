// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEBOTRESPONSE_H
#define QTAWS_ASSOCIATEBOTRESPONSE_H

#include "connectresponse.h"
#include "associatebotrequest.h"

namespace QtAws {
namespace Connect {

class AssociateBotResponsePrivate;

class QTAWSCONNECT_EXPORT AssociateBotResponse : public ConnectResponse {
    Q_OBJECT

public:
    AssociateBotResponse(const AssociateBotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateBotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateBotResponse)
    Q_DISABLE_COPY(AssociateBotResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
