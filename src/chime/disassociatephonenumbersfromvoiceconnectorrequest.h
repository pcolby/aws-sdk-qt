// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPHONENUMBERSFROMVOICECONNECTORREQUEST_H
#define QTAWS_DISASSOCIATEPHONENUMBERSFROMVOICECONNECTORREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DisassociatePhoneNumbersFromVoiceConnectorRequestPrivate;

class QTAWSCHIME_EXPORT DisassociatePhoneNumbersFromVoiceConnectorRequest : public ChimeRequest {

public:
    DisassociatePhoneNumbersFromVoiceConnectorRequest(const DisassociatePhoneNumbersFromVoiceConnectorRequest &other);
    DisassociatePhoneNumbersFromVoiceConnectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociatePhoneNumbersFromVoiceConnectorRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
