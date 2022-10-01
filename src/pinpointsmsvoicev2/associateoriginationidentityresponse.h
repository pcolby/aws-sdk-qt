// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEORIGINATIONIDENTITYRESPONSE_H
#define QTAWS_ASSOCIATEORIGINATIONIDENTITYRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "associateoriginationidentityrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class AssociateOriginationIdentityResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT AssociateOriginationIdentityResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    AssociateOriginationIdentityResponse(const AssociateOriginationIdentityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateOriginationIdentityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateOriginationIdentityResponse)
    Q_DISABLE_COPY(AssociateOriginationIdentityResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
