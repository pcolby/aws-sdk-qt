// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTUSERPERMISSIONSBOUNDARYRESPONSE_H
#define QTAWS_PUTUSERPERMISSIONSBOUNDARYRESPONSE_H

#include "iamresponse.h"
#include "putuserpermissionsboundaryrequest.h"

namespace QtAws {
namespace Iam {

class PutUserPermissionsBoundaryResponsePrivate;

class QTAWSIAM_EXPORT PutUserPermissionsBoundaryResponse : public IamResponse {
    Q_OBJECT

public:
    PutUserPermissionsBoundaryResponse(const PutUserPermissionsBoundaryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutUserPermissionsBoundaryRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutUserPermissionsBoundaryResponse)
    Q_DISABLE_COPY(PutUserPermissionsBoundaryResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
