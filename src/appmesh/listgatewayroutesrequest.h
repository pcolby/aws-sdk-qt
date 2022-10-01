// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGATEWAYROUTESREQUEST_H
#define QTAWS_LISTGATEWAYROUTESREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class ListGatewayRoutesRequestPrivate;

class QTAWSAPPMESH_EXPORT ListGatewayRoutesRequest : public AppMeshRequest {

public:
    ListGatewayRoutesRequest(const ListGatewayRoutesRequest &other);
    ListGatewayRoutesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGatewayRoutesRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
