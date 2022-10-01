// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENDPOINTREQUEST_H
#define QTAWS_GETENDPOINTREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetEndpointRequestPrivate;

class QTAWSPINPOINT_EXPORT GetEndpointRequest : public PinpointRequest {

public:
    GetEndpointRequest(const GetEndpointRequest &other);
    GetEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEndpointRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
