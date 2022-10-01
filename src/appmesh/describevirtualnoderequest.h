// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVIRTUALNODEREQUEST_H
#define QTAWS_DESCRIBEVIRTUALNODEREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeVirtualNodeRequestPrivate;

class QTAWSAPPMESH_EXPORT DescribeVirtualNodeRequest : public AppMeshRequest {

public:
    DescribeVirtualNodeRequest(const DescribeVirtualNodeRequest &other);
    DescribeVirtualNodeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVirtualNodeRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
