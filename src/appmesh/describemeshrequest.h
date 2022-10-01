// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMESHREQUEST_H
#define QTAWS_DESCRIBEMESHREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeMeshRequestPrivate;

class QTAWSAPPMESH_EXPORT DescribeMeshRequest : public AppMeshRequest {

public:
    DescribeMeshRequest(const DescribeMeshRequest &other);
    DescribeMeshRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMeshRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
