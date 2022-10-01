// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPHONENUMBERSWITHVOICECONNECTORGROUPRESPONSE_P_H
#define QTAWS_ASSOCIATEPHONENUMBERSWITHVOICECONNECTORGROUPRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class AssociatePhoneNumbersWithVoiceConnectorGroupResponse;

class AssociatePhoneNumbersWithVoiceConnectorGroupResponsePrivate : public ChimeResponsePrivate {

public:

    explicit AssociatePhoneNumbersWithVoiceConnectorGroupResponsePrivate(AssociatePhoneNumbersWithVoiceConnectorGroupResponse * const q);

    void parseAssociatePhoneNumbersWithVoiceConnectorGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociatePhoneNumbersWithVoiceConnectorGroupResponse)
    Q_DISABLE_COPY(AssociatePhoneNumbersWithVoiceConnectorGroupResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
