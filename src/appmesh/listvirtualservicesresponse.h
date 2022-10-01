// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVIRTUALSERVICESRESPONSE_H
#define QTAWS_LISTVIRTUALSERVICESRESPONSE_H

#include "appmeshresponse.h"
#include "listvirtualservicesrequest.h"

namespace QtAws {
namespace AppMesh {

class ListVirtualServicesResponsePrivate;

class QTAWSAPPMESH_EXPORT ListVirtualServicesResponse : public AppMeshResponse {
    Q_OBJECT

public:
    ListVirtualServicesResponse(const ListVirtualServicesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVirtualServicesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVirtualServicesResponse)
    Q_DISABLE_COPY(ListVirtualServicesResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
