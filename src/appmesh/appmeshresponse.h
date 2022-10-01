// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPMESHRESPONSE_H
#define QTAWS_APPMESHRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsappmeshglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace AppMesh {

class AppMeshResponsePrivate;

class QTAWSAPPMESH_EXPORT AppMeshResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    AppMeshResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    AppMeshResponse(AppMeshResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AppMeshResponse)
    Q_DISABLE_COPY(AppMeshResponse)

};

} // namespace AppMesh
} // namespace QtAws

#endif
