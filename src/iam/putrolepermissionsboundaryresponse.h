// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTROLEPERMISSIONSBOUNDARYRESPONSE_H
#define QTAWS_PUTROLEPERMISSIONSBOUNDARYRESPONSE_H

#include "iamresponse.h"
#include "putrolepermissionsboundaryrequest.h"

namespace QtAws {
namespace Iam {

class PutRolePermissionsBoundaryResponsePrivate;

class QTAWSIAM_EXPORT PutRolePermissionsBoundaryResponse : public IamResponse {
    Q_OBJECT

public:
    PutRolePermissionsBoundaryResponse(const PutRolePermissionsBoundaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutRolePermissionsBoundaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutRolePermissionsBoundaryResponse)
    Q_DISABLE_COPY(PutRolePermissionsBoundaryResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
