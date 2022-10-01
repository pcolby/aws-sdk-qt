// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVIRTUALSERVICEREQUEST_H
#define QTAWS_CREATEVIRTUALSERVICEREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class CreateVirtualServiceRequestPrivate;

class QTAWSAPPMESH_EXPORT CreateVirtualServiceRequest : public AppMeshRequest {

public:
    CreateVirtualServiceRequest(const CreateVirtualServiceRequest &other);
    CreateVirtualServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVirtualServiceRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
