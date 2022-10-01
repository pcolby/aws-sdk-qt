// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTGROUPREQUEST_H
#define QTAWS_UPDATEENDPOINTGROUPREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class UpdateEndpointGroupRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT UpdateEndpointGroupRequest : public GlobalAcceleratorRequest {

public:
    UpdateEndpointGroupRequest(const UpdateEndpointGroupRequest &other);
    UpdateEndpointGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEndpointGroupRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
