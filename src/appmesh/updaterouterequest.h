// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTEREQUEST_H
#define QTAWS_UPDATEROUTEREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class UpdateRouteRequestPrivate;

class QTAWSAPPMESH_EXPORT UpdateRouteRequest : public AppMeshRequest {

public:
    UpdateRouteRequest(const UpdateRouteRequest &other);
    UpdateRouteRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRouteRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
