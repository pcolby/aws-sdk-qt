// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALROUTERSREQUEST_H
#define QTAWS_LISTVIRTUALROUTERSREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class ListVirtualRoutersRequestPrivate;

class QTAWSAPPMESH_EXPORT ListVirtualRoutersRequest : public AppMeshRequest {

public:
    ListVirtualRoutersRequest(const ListVirtualRoutersRequest &other);
    ListVirtualRoutersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVirtualRoutersRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
