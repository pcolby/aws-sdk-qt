// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMESHREQUEST_H
#define QTAWS_DELETEMESHREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class DeleteMeshRequestPrivate;

class QTAWSAPPMESH_EXPORT DeleteMeshRequest : public AppMeshRequest {

public:
    DeleteMeshRequest(const DeleteMeshRequest &other);
    DeleteMeshRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMeshRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
