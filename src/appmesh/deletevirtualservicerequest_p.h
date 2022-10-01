// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALSERVICEREQUEST_P_H
#define QTAWS_DELETEVIRTUALSERVICEREQUEST_P_H

#include "appmeshrequest_p.h"
#include "deletevirtualservicerequest.h"

namespace QtAws {
namespace AppMesh {

class DeleteVirtualServiceRequest;

class DeleteVirtualServiceRequestPrivate : public AppMeshRequestPrivate {

public:
    DeleteVirtualServiceRequestPrivate(const AppMeshRequest::Action action,
                                   DeleteVirtualServiceRequest * const q);
    DeleteVirtualServiceRequestPrivate(const DeleteVirtualServiceRequestPrivate &other,
                                   DeleteVirtualServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVirtualServiceRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
