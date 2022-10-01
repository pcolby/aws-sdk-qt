// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALSERVICEREQUEST_H
#define QTAWS_UPDATEVIRTUALSERVICEREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class UpdateVirtualServiceRequestPrivate;

class QTAWSAPPMESH_EXPORT UpdateVirtualServiceRequest : public AppMeshRequest {

public:
    UpdateVirtualServiceRequest(const UpdateVirtualServiceRequest &other);
    UpdateVirtualServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVirtualServiceRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
