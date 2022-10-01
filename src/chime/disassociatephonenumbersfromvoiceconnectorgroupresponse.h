// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPHONENUMBERSFROMVOICECONNECTORGROUPRESPONSE_H
#define QTAWS_DISASSOCIATEPHONENUMBERSFROMVOICECONNECTORGROUPRESPONSE_H

#include "chimeresponse.h"
#include "disassociatephonenumbersfromvoiceconnectorgrouprequest.h"

namespace QtAws {
namespace Chime {

class DisassociatePhoneNumbersFromVoiceConnectorGroupResponsePrivate;

class QTAWSCHIME_EXPORT DisassociatePhoneNumbersFromVoiceConnectorGroupResponse : public ChimeResponse {
    Q_OBJECT

public:
    DisassociatePhoneNumbersFromVoiceConnectorGroupResponse(const DisassociatePhoneNumbersFromVoiceConnectorGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociatePhoneNumbersFromVoiceConnectorGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociatePhoneNumbersFromVoiceConnectorGroupResponse)
    Q_DISABLE_COPY(DisassociatePhoneNumbersFromVoiceConnectorGroupResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
