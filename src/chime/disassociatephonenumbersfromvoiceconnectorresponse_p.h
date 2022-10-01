// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPHONENUMBERSFROMVOICECONNECTORRESPONSE_P_H
#define QTAWS_DISASSOCIATEPHONENUMBERSFROMVOICECONNECTORRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DisassociatePhoneNumbersFromVoiceConnectorResponse;

class DisassociatePhoneNumbersFromVoiceConnectorResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DisassociatePhoneNumbersFromVoiceConnectorResponsePrivate(DisassociatePhoneNumbersFromVoiceConnectorResponse * const q);

    void parseDisassociatePhoneNumbersFromVoiceConnectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociatePhoneNumbersFromVoiceConnectorResponse)
    Q_DISABLE_COPY(DisassociatePhoneNumbersFromVoiceConnectorResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
