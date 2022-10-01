// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALGATEWAYSREQUEST_H
#define QTAWS_LISTVIRTUALGATEWAYSREQUEST_H

#include "appmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class ListVirtualGatewaysRequestPrivate;

class QTAWSAPPMESH_EXPORT ListVirtualGatewaysRequest : public AppMeshRequest {

public:
    ListVirtualGatewaysRequest(const ListVirtualGatewaysRequest &other);
    ListVirtualGatewaysRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVirtualGatewaysRequest)

};

} // namespace AppMesh
} // namespace QtAws

#endif
