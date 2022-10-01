// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALGATEWAYREQUEST_H
#define QTAWS_DESCRIBEVIRTUALGATEWAYREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeVirtualGatewayRequestPrivate;

class QTAWSAPPMESH_EXPORT DescribeVirtualGatewayRequest : public AppMeshRequest {

public:
    DescribeVirtualGatewayRequest(const DescribeVirtualGatewayRequest &other);
    DescribeVirtualGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVirtualGatewayRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
