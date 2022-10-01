// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOWCUSTOMROUTINGTRAFFICREQUEST_H
#define QTAWS_ALLOWCUSTOMROUTINGTRAFFICREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class AllowCustomRoutingTrafficRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT AllowCustomRoutingTrafficRequest : public GlobalAcceleratorRequest {

public:
    AllowCustomRoutingTrafficRequest(const AllowCustomRoutingTrafficRequest &other);
    AllowCustomRoutingTrafficRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AllowCustomRoutingTrafficRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
