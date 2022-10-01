// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMESHRESPONSE_H
#define QTAWS_CREATEMESHRESPONSE_H

#include "appmeshresponse.h"
#include "createmeshrequest.h"

namespace QtAws {
namespace AppMesh {

class CreateMeshResponsePrivate;

class QTAWSAPPMESH_EXPORT CreateMeshResponse : public AppMeshResponse {
    Q_OBJECT

public:
    CreateMeshResponse(const CreateMeshRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMeshRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMeshResponse)
    Q_DISABLE_COPY(CreateMeshResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
