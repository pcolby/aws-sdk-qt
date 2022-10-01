// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEORIGINATIONIDENTITYREQUEST_H
#define QTAWS_ASSOCIATEORIGINATIONIDENTITYREQUEST_H

#include "pinpointsmsvoicev2request.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class AssociateOriginationIdentityRequestPrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT AssociateOriginationIdentityRequest : public PinpointSmsVoiceV2Request {

public:
    AssociateOriginationIdentityRequest(const AssociateOriginationIdentityRequest &other);
    AssociateOriginationIdentityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateOriginationIdentityRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
