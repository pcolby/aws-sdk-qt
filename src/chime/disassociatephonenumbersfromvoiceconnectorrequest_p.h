// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPHONENUMBERSFROMVOICECONNECTORREQUEST_P_H
#define QTAWS_DISASSOCIATEPHONENUMBERSFROMVOICECONNECTORREQUEST_P_H

#include "chimerequest_p.h"
#include "disassociatephonenumbersfromvoiceconnectorrequest.h"

namespace QtAws {
namespace Chime {

class DisassociatePhoneNumbersFromVoiceConnectorRequest;

class DisassociatePhoneNumbersFromVoiceConnectorRequestPrivate : public ChimeRequestPrivate {

public:
    DisassociatePhoneNumbersFromVoiceConnectorRequestPrivate(const ChimeRequest::Action action,
                                   DisassociatePhoneNumbersFromVoiceConnectorRequest * const q);
    DisassociatePhoneNumbersFromVoiceConnectorRequestPrivate(const DisassociatePhoneNumbersFromVoiceConnectorRequestPrivate &other,
                                   DisassociatePhoneNumbersFromVoiceConnectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociatePhoneNumbersFromVoiceConnectorRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
