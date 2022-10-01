// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROLERESPONSE_H
#define QTAWS_DELETEROLERESPONSE_H

#include "iamresponse.h"
#include "deleterolerequest.h"

namespace QtAws {
namespace Iam {

class DeleteRoleResponsePrivate;

class QTAWSIAM_EXPORT DeleteRoleResponse : public IamResponse {
    Q_OBJECT

public:
    DeleteRoleResponse(const DeleteRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRoleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRoleResponse)
    Q_DISABLE_COPY(DeleteRoleResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
