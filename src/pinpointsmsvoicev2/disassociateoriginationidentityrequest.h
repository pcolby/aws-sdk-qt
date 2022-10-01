// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEORIGINATIONIDENTITYREQUEST_H
#define QTAWS_DISASSOCIATEORIGINATIONIDENTITYREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DisassociateOriginationIdentityRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DisassociateOriginationIdentityRequest : public PinpointSmsVoiceV2Request {

public:
    DisassociateOriginationIdentityRequest(const DisassociateOriginationIdentityRequest &other);
    DisassociateOriginationIdentityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateOriginationIdentityRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
