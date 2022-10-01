// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPHONENUMBERSFROMVOICECONNECTORGROUPRESPONSE_P_H
#define QTAWS_DISASSOCIATEPHONENUMBERSFROMVOICECONNECTORGROUPRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DisassociatePhoneNumbersFromVoiceConnectorGroupResponse;

class DisassociatePhoneNumbersFromVoiceConnectorGroupResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DisassociatePhoneNumbersFromVoiceConnectorGroupResponsePrivate(DisassociatePhoneNumbersFromVoiceConnectorGroupResponse * const q);

    void parseDisassociatePhoneNumbersFromVoiceConnectorGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociatePhoneNumbersFromVoiceConnectorGroupResponse)
    Q_DISABLE_COPY(DisassociatePhoneNumbersFromVoiceConnectorGroupResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
