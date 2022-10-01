// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMESHRESPONSE_H
#define QTAWS_DESCRIBEMESHRESPONSE_H

#include "appmeshresponse.h"
#include "describemeshrequest.h"

namespace QtAws {
namespace AppMesh {

class DescribeMeshResponsePrivate;

class QTAWSAPPMESH_EXPORT DescribeMeshResponse : public AppMeshResponse {
    Q_OBJECT

public:
    DescribeMeshResponse(const DescribeMeshRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMeshRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMeshResponse)
    Q_DISABLE_COPY(DescribeMeshResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
