// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATETUNNELACCESSTOKENREQUEST_H
#define QTAWS_ROTATETUNNELACCESSTOKENREQUEST_H

#include "iotsecuretunnelingrequest.h"

namespace QtAws {
namespace IoTSecureTunneling {

class RotateTunnelAccessTokenRequestPrivate;

class QTAWSIOTSECURETUNNELING_EXPORT RotateTunnelAccessTokenRequest : public IoTSecureTunnelingRequest {

public:
    RotateTunnelAccessTokenRequest(const RotateTunnelAccessTokenRequest &other);
    RotateTunnelAccessTokenRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RotateTunnelAccessTokenRequest)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
