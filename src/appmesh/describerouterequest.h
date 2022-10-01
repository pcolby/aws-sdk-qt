// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROUTEREQUEST_H
#define QTAWS_DESCRIBEROUTEREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeRouteRequestPrivate;

class QTAWSAPPMESH_EXPORT DescribeRouteRequest : public AppMeshRequest {

public:
    DescribeRouteRequest(const DescribeRouteRequest &other);
    DescribeRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRouteRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
