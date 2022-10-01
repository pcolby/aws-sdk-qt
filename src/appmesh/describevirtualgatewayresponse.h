// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALGATEWAYRESPONSE_H
#define QTAWS_DESCRIBEVIRTUALGATEWAYRESPONSE_H

#include "appmeshresponse.h"
#include "describevirtualgatewayrequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeVirtualGatewayResponsePrivate;

class QTAWSAPPMESH_EXPORT DescribeVirtualGatewayResponse : public AppMeshResponse {
    Q_OBJECT

public:
    DescribeVirtualGatewayResponse(const DescribeVirtualGatewayRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVirtualGatewayRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVirtualGatewayResponse)
    Q_DISABLE_COPY(DescribeVirtualGatewayResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
