// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPHONENUMBERSWITHVOICECONNECTORRESPONSE_H
#define QTAWS_ASSOCIATEPHONENUMBERSWITHVOICECONNECTORRESPONSE_H

#include "chimeresponse.h"
#include "associatephonenumberswithvoiceconnectorrequest.h"

namespace QtAws {
namespace Chime {

class AssociatePhoneNumbersWithVoiceConnectorResponsePrivate;

class QTAWSCHIME_EXPORT AssociatePhoneNumbersWithVoiceConnectorResponse : public ChimeResponse {
    Q_OBJECT

public:
    AssociatePhoneNumbersWithVoiceConnectorResponse(const AssociatePhoneNumbersWithVoiceConnectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociatePhoneNumbersWithVoiceConnectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociatePhoneNumbersWithVoiceConnectorResponse)
    Q_DISABLE_COPY(AssociatePhoneNumbersWithVoiceConnectorResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
