// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPHONENUMBERSWITHVOICECONNECTORRESPONSE_P_H
#define QTAWS_ASSOCIATEPHONENUMBERSWITHVOICECONNECTORRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class AssociatePhoneNumbersWithVoiceConnectorResponse;

class AssociatePhoneNumbersWithVoiceConnectorResponsePrivate : public ChimeResponsePrivate {

public:

    explicit AssociatePhoneNumbersWithVoiceConnectorResponsePrivate(AssociatePhoneNumbersWithVoiceConnectorResponse * const q);

    void parseAssociatePhoneNumbersWithVoiceConnectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociatePhoneNumbersWithVoiceConnectorResponse)
    Q_DISABLE_COPY(AssociatePhoneNumbersWithVoiceConnectorResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
