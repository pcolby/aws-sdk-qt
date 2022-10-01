// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPHONENUMBERSWITHVOICECONNECTORREQUEST_H
#define QTAWS_ASSOCIATEPHONENUMBERSWITHVOICECONNECTORREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class AssociatePhoneNumbersWithVoiceConnectorRequestPrivate;

class QTAWSCHIME_EXPORT AssociatePhoneNumbersWithVoiceConnectorRequest : public ChimeRequest {

public:
    AssociatePhoneNumbersWithVoiceConnectorRequest(const AssociatePhoneNumbersWithVoiceConnectorRequest &other);
    AssociatePhoneNumbersWithVoiceConnectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociatePhoneNumbersWithVoiceConnectorRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
