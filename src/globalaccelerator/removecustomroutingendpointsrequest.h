// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVECUSTOMROUTINGENDPOINTSREQUEST_H
#define QTAWS_REMOVECUSTOMROUTINGENDPOINTSREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class RemoveCustomRoutingEndpointsRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT RemoveCustomRoutingEndpointsRequest : public GlobalAcceleratorRequest {

public:
    RemoveCustomRoutingEndpointsRequest(const RemoveCustomRoutingEndpointsRequest &other);
    RemoveCustomRoutingEndpointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveCustomRoutingEndpointsRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
