// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEORIGINATIONIDENTITYRESPONSE_H
#define QTAWS_DISASSOCIATEORIGINATIONIDENTITYRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "disassociateoriginationidentityrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DisassociateOriginationIdentityResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DisassociateOriginationIdentityResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    DisassociateOriginationIdentityResponse(const DisassociateOriginationIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateOriginationIdentityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateOriginationIdentityResponse)
    Q_DISABLE_COPY(DisassociateOriginationIdentityResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
