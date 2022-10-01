// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEPHONENUMBERSWITHVOICECONNECTORGROUPRESPONSE_H
#define QTAWS_ASSOCIATEPHONENUMBERSWITHVOICECONNECTORGROUPRESPONSE_H

#include "chimeresponse.h"
#include "associatephonenumberswithvoiceconnectorgrouprequest.h"

namespace QtAws {
namespace Chime {

class AssociatePhoneNumbersWithVoiceConnectorGroupResponsePrivate;

class QTAWSCHIME_EXPORT AssociatePhoneNumbersWithVoiceConnectorGroupResponse : public ChimeResponse {
    Q_OBJECT

public:
    AssociatePhoneNumbersWithVoiceConnectorGroupResponse(const AssociatePhoneNumbersWithVoiceConnectorGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociatePhoneNumbersWithVoiceConnectorGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociatePhoneNumbersWithVoiceConnectorGroupResponse)
    Q_DISABLE_COPY(AssociatePhoneNumbersWithVoiceConnectorGroupResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
