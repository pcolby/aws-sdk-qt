// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALSERVICERESPONSE_H
#define QTAWS_DESCRIBEVIRTUALSERVICERESPONSE_H

#include "appmeshresponse.h"
#include "describevirtualservicerequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeVirtualServiceResponsePrivate;

class QTAWSAPPMESH_EXPORT DescribeVirtualServiceResponse : public AppMeshResponse {
    Q_OBJECT

public:
    DescribeVirtualServiceResponse(const DescribeVirtualServiceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVirtualServiceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVirtualServiceResponse)
    Q_DISABLE_COPY(DescribeVirtualServiceResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
