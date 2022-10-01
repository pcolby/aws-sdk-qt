// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEMACSECKEYRESPONSE_H
#define QTAWS_DISASSOCIATEMACSECKEYRESPONSE_H

#include "directconnectresponse.h"
#include "disassociatemacseckeyrequest.h"

namespace QtAws {
namespace DirectConnect {

class DisassociateMacSecKeyResponsePrivate;

class QTAWSDIRECTCONNECT_EXPORT DisassociateMacSecKeyResponse : public DirectConnectResponse {
    Q_OBJECT

public:
    DisassociateMacSecKeyResponse(const DisassociateMacSecKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateMacSecKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateMacSecKeyResponse)
    Q_DISABLE_COPY(DisassociateMacSecKeyResponse)

};

} // namespace DirectConnect
} // namespace QtAws

#endif
