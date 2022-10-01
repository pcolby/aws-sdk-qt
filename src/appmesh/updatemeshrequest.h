// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMESHREQUEST_H
#define QTAWS_UPDATEMESHREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class UpdateMeshRequestPrivate;

class QTAWSAPPMESH_EXPORT UpdateMeshRequest : public AppMeshRequest {

public:
    UpdateMeshRequest(const UpdateMeshRequest &other);
    UpdateMeshRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMeshRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
