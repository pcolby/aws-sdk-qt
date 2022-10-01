// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPHONENUMBERSWITHVOICECONNECTORGROUPREQUEST_P_H
#define QTAWS_ASSOCIATEPHONENUMBERSWITHVOICECONNECTORGROUPREQUEST_P_H

#include "chimerequest_p.h"
#include "associatephonenumberswithvoiceconnectorgrouprequest.h"

namespace QtAws {
namespace Chime {

class AssociatePhoneNumbersWithVoiceConnectorGroupRequest;

class AssociatePhoneNumbersWithVoiceConnectorGroupRequestPrivate : public ChimeRequestPrivate {

public:
    AssociatePhoneNumbersWithVoiceConnectorGroupRequestPrivate(const ChimeRequest::Action action,
                                   AssociatePhoneNumbersWithVoiceConnectorGroupRequest * const q);
    AssociatePhoneNumbersWithVoiceConnectorGroupRequestPrivate(const AssociatePhoneNumbersWithVoiceConnectorGroupRequestPrivate &other,
                                   AssociatePhoneNumbersWithVoiceConnectorGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociatePhoneNumbersWithVoiceConnectorGroupRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
