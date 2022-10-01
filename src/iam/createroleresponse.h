// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROLERESPONSE_H
#define QTAWS_CREATEROLERESPONSE_H

#include "iamresponse.h"
#include "createrolerequest.h"

namespace QtAws {
namespace Iam {

class CreateRoleResponsePrivate;

class QTAWSIAM_EXPORT CreateRoleResponse : public IamResponse {
    Q_OBJECT

public:
    CreateRoleResponse(const CreateRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRoleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRoleResponse)
    Q_DISABLE_COPY(CreateRoleResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
