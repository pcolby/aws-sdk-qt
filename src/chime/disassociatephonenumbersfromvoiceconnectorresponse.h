// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPHONENUMBERSFROMVOICECONNECTORRESPONSE_H
#define QTAWS_DISASSOCIATEPHONENUMBERSFROMVOICECONNECTORRESPONSE_H

#include "chimeresponse.h"
#include "disassociatephonenumbersfromvoiceconnectorrequest.h"

namespace QtAws {
namespace Chime {

class DisassociatePhoneNumbersFromVoiceConnectorResponsePrivate;

class QTAWSCHIME_EXPORT DisassociatePhoneNumbersFromVoiceConnectorResponse : public ChimeResponse {
    Q_OBJECT

public:
    DisassociatePhoneNumbersFromVoiceConnectorResponse(const DisassociatePhoneNumbersFromVoiceConnectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociatePhoneNumbersFromVoiceConnectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociatePhoneNumbersFromVoiceConnectorResponse)
    Q_DISABLE_COPY(DisassociatePhoneNumbersFromVoiceConnectorResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
