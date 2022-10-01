// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROLERESPONSE_H
#define QTAWS_UPDATEROLERESPONSE_H

#include "iamresponse.h"
#include "updaterolerequest.h"

namespace QtAws {
namespace Iam {

class UpdateRoleResponsePrivate;

class QTAWSIAM_EXPORT UpdateRoleResponse : public IamResponse {
    Q_OBJECT

public:
    UpdateRoleResponse(const UpdateRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRoleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRoleResponse)
    Q_DISABLE_COPY(UpdateRoleResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
