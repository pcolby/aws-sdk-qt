// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALSERVICEREQUEST_P_H
#define QTAWS_UPDATEVIRTUALSERVICEREQUEST_P_H

#include "appmeshrequest_p.h"
#include "updatevirtualservicerequest.h"

namespace QtAws {
namespace AppMesh {

class UpdateVirtualServiceRequest;

class UpdateVirtualServiceRequestPrivate : public AppMeshRequestPrivate {

public:
    UpdateVirtualServiceRequestPrivate(const AppMeshRequest::Action action,
                                   UpdateVirtualServiceRequest * const q);
    UpdateVirtualServiceRequestPrivate(const UpdateVirtualServiceRequestPrivate &other,
                                   UpdateVirtualServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVirtualServiceRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
