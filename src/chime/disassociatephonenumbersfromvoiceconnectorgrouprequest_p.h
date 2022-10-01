// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPHONENUMBERSFROMVOICECONNECTORGROUPREQUEST_P_H
#define QTAWS_DISASSOCIATEPHONENUMBERSFROMVOICECONNECTORGROUPREQUEST_P_H

#include "chimerequest_p.h"
#include "disassociatephonenumbersfromvoiceconnectorgrouprequest.h"

namespace QtAws {
namespace Chime {

class DisassociatePhoneNumbersFromVoiceConnectorGroupRequest;

class DisassociatePhoneNumbersFromVoiceConnectorGroupRequestPrivate : public ChimeRequestPrivate {

public:
    DisassociatePhoneNumbersFromVoiceConnectorGroupRequestPrivate(const ChimeRequest::Action action,
                                   DisassociatePhoneNumbersFromVoiceConnectorGroupRequest * const q);
    DisassociatePhoneNumbersFromVoiceConnectorGroupRequestPrivate(const DisassociatePhoneNumbersFromVoiceConnectorGroupRequestPrivate &other,
                                   DisassociatePhoneNumbersFromVoiceConnectorGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociatePhoneNumbersFromVoiceConnectorGroupRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
