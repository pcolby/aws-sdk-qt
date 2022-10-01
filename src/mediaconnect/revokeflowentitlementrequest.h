// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEFLOWENTITLEMENTREQUEST_H
#define QTAWS_REVOKEFLOWENTITLEMENTREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class RevokeFlowEntitlementRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT RevokeFlowEntitlementRequest : public MediaConnectRequest {

public:
    RevokeFlowEntitlementRequest(const RevokeFlowEntitlementRequest &other);
    RevokeFlowEntitlementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RevokeFlowEntitlementRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
