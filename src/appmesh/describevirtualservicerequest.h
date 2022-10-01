// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALSERVICEREQUEST_H
#define QTAWS_DESCRIBEVIRTUALSERVICEREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeVirtualServiceRequestPrivate;

class QTAWSAPPMESH_EXPORT DescribeVirtualServiceRequest : public AppMeshRequest {

public:
    DescribeVirtualServiceRequest(const DescribeVirtualServiceRequest &other);
    DescribeVirtualServiceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVirtualServiceRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
