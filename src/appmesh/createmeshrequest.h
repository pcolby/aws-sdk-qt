// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMESHREQUEST_H
#define QTAWS_CREATEMESHREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class CreateMeshRequestPrivate;

class QTAWSAPPMESH_EXPORT CreateMeshRequest : public AppMeshRequest {

public:
    CreateMeshRequest(const CreateMeshRequest &other);
    CreateMeshRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMeshRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
