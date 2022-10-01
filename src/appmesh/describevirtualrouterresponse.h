// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALROUTERRESPONSE_H
#define QTAWS_DESCRIBEVIRTUALROUTERRESPONSE_H

#include "appmeshresponse.h"
#include "describevirtualrouterrequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeVirtualRouterResponsePrivate;

class QTAWSAPPMESH_EXPORT DescribeVirtualRouterResponse : public AppMeshResponse {
    Q_OBJECT

public:
    DescribeVirtualRouterResponse(const DescribeVirtualRouterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVirtualRouterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVirtualRouterResponse)
    Q_DISABLE_COPY(DescribeVirtualRouterResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
