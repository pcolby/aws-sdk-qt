// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALNODESREQUEST_H
#define QTAWS_LISTVIRTUALNODESREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class ListVirtualNodesRequestPrivate;

class QTAWSAPPMESH_EXPORT ListVirtualNodesRequest : public AppMeshRequest {

public:
    ListVirtualNodesRequest(const ListVirtualNodesRequest &other);
    ListVirtualNodesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVirtualNodesRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
