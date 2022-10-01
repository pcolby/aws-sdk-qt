// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DENYCUSTOMROUTINGTRAFFICREQUEST_H
#define QTAWS_DENYCUSTOMROUTINGTRAFFICREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DenyCustomRoutingTrafficRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DenyCustomRoutingTrafficRequest : public GlobalAcceleratorRequest {

public:
    DenyCustomRoutingTrafficRequest(const DenyCustomRoutingTrafficRequest &other);
    DenyCustomRoutingTrafficRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DenyCustomRoutingTrafficRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
