// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPHONENUMBERSFROMVOICECONNECTORGROUPREQUEST_H
#define QTAWS_DISASSOCIATEPHONENUMBERSFROMVOICECONNECTORGROUPREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DisassociatePhoneNumbersFromVoiceConnectorGroupRequestPrivate;

class QTAWSCHIME_EXPORT DisassociatePhoneNumbersFromVoiceConnectorGroupRequest : public ChimeRequest {

public:
    DisassociatePhoneNumbersFromVoiceConnectorGroupRequest(const DisassociatePhoneNumbersFromVoiceConnectorGroupRequest &other);
    DisassociatePhoneNumbersFromVoiceConnectorGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociatePhoneNumbersFromVoiceConnectorGroupRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
