// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPHONENUMBERSWITHVOICECONNECTORREQUEST_P_H
#define QTAWS_ASSOCIATEPHONENUMBERSWITHVOICECONNECTORREQUEST_P_H

#include "chimerequest_p.h"
#include "associatephonenumberswithvoiceconnectorrequest.h"

namespace QtAws {
namespace Chime {

class AssociatePhoneNumbersWithVoiceConnectorRequest;

class AssociatePhoneNumbersWithVoiceConnectorRequestPrivate : public ChimeRequestPrivate {

public:
    AssociatePhoneNumbersWithVoiceConnectorRequestPrivate(const ChimeRequest::Action action,
                                   AssociatePhoneNumbersWithVoiceConnectorRequest * const q);
    AssociatePhoneNumbersWithVoiceConnectorRequestPrivate(const AssociatePhoneNumbersWithVoiceConnectorRequestPrivate &other,
                                   AssociatePhoneNumbersWithVoiceConnectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociatePhoneNumbersWithVoiceConnectorRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
