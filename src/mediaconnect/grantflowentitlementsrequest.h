// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GRANTFLOWENTITLEMENTSREQUEST_H
#define QTAWS_GRANTFLOWENTITLEMENTSREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class GrantFlowEntitlementsRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT GrantFlowEntitlementsRequest : public MediaConnectRequest {

public:
    GrantFlowEntitlementsRequest(const GrantFlowEntitlementsRequest &other);
    GrantFlowEntitlementsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GrantFlowEntitlementsRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
