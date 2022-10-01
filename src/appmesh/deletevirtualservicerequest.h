// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVIRTUALSERVICEREQUEST_H
#define QTAWS_DELETEVIRTUALSERVICEREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class DeleteVirtualServiceRequestPrivate;

class QTAWSAPPMESH_EXPORT DeleteVirtualServiceRequest : public AppMeshRequest {

public:
    DeleteVirtualServiceRequest(const DeleteVirtualServiceRequest &other);
    DeleteVirtualServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVirtualServiceRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
