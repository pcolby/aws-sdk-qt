// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEMACSECKEYRESPONSE_H
#define QTAWS_ASSOCIATEMACSECKEYRESPONSE_H

#include "directconnectresponse.h"
#include "associatemacseckeyrequest.h"

namespace QtAws {
namespace DirectConnect {

class AssociateMacSecKeyResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT AssociateMacSecKeyResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    AssociateMacSecKeyResponse(const AssociateMacSecKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateMacSecKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateMacSecKeyResponse)
    Q_DISABLE_COPY(AssociateMacSecKeyResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
