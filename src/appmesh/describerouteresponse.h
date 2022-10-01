// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTERESPONSE_H
#define QTAWS_DESCRIBEROUTERESPONSE_H

#include "appmeshresponse.h"
#include "describerouterequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeRouteResponsePrivate;

class QTAWSAPPMESH_EXPORT DescribeRouteResponse : public AppMeshResponse {
    Q_OBJECT

public:
    DescribeRouteResponse(const DescribeRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRouteResponse)
    Q_DISABLE_COPY(DescribeRouteResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
