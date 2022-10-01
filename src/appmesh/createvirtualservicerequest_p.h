// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALSERVICEREQUEST_P_H
#define QTAWS_CREATEVIRTUALSERVICEREQUEST_P_H

#include "appmeshrequest_p.h"
#include "createvirtualservicerequest.h"

namespace QtAws {
namespace AppMesh {

class CreateVirtualServiceRequest;

class CreateVirtualServiceRequestPrivate : public AppMeshRequestPrivate {

public:
    CreateVirtualServiceRequestPrivate(const AppMeshRequest::Action action,
                                   CreateVirtualServiceRequest * const q);
    CreateVirtualServiceRequestPrivate(const CreateVirtualServiceRequestPrivate &other,
                                   CreateVirtualServiceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVirtualServiceRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
