// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMESHESREQUEST_H
#define QTAWS_LISTMESHESREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class ListMeshesRequestPrivate;

class QTAWSAPPMESH_EXPORT ListMeshesRequest : public AppMeshRequest {

public:
    ListMeshesRequest(const ListMeshesRequest &other);
    ListMeshesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMeshesRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
