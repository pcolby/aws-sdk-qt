// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVIRTUALNODEREQUEST_H
#define QTAWS_UPDATEVIRTUALNODEREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class UpdateVirtualNodeRequestPrivate;

class QTAWSAPPMESH_EXPORT UpdateVirtualNodeRequest : public AppMeshRequest {

public:
    UpdateVirtualNodeRequest(const UpdateVirtualNodeRequest &other);
    UpdateVirtualNodeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateVirtualNodeRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
