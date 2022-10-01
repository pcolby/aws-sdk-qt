// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROLEPERMISSIONSBOUNDARYRESPONSE_H
#define QTAWS_DELETEROLEPERMISSIONSBOUNDARYRESPONSE_H

#include "iamresponse.h"
#include "deleterolepermissionsboundaryrequest.h"

namespace QtAws {
namespace Iam {

class DeleteRolePermissionsBoundaryResponsePrivate;

class QTAWSIAM_EXPORT DeleteRolePermissionsBoundaryResponse : public IamResponse {
    Q_OBJECT

public:
    DeleteRolePermissionsBoundaryResponse(const DeleteRolePermissionsBoundaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRolePermissionsBoundaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRolePermissionsBoundaryResponse)
    Q_DISABLE_COPY(DeleteRolePermissionsBoundaryResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
