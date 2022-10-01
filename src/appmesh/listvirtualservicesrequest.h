// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALSERVICESREQUEST_H
#define QTAWS_LISTVIRTUALSERVICESREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class ListVirtualServicesRequestPrivate;

class QTAWSAPPMESH_EXPORT ListVirtualServicesRequest : public AppMeshRequest {

public:
    ListVirtualServicesRequest(const ListVirtualServicesRequest &other);
    ListVirtualServicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVirtualServicesRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
