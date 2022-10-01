// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTGROUPREQUEST_H
#define QTAWS_DELETEENDPOINTGROUPREQUEST_H

#include "globalacceleratorrequest.h"

namespace QtAws {
namespace GlobalAccelerator {

class DeleteEndpointGroupRequestPrivate;

class QTAWSGLOBALACCELERATOR_EXPORT DeleteEndpointGroupRequest : public GlobalAcceleratorRequest {

public:
    DeleteEndpointGroupRequest(const DeleteEndpointGroupRequest &other);
    DeleteEndpointGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEndpointGroupRequest)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
