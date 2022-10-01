// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWENTITLEMENTREQUEST_H
#define QTAWS_UPDATEFLOWENTITLEMENTREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class UpdateFlowEntitlementRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT UpdateFlowEntitlementRequest : public MediaConnectRequest {

public:
    UpdateFlowEntitlementRequest(const UpdateFlowEntitlementRequest &other);
    UpdateFlowEntitlementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFlowEntitlementRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
