// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICELINKEDROLERESPONSE_H
#define QTAWS_CREATESERVICELINKEDROLERESPONSE_H

#include "iamresponse.h"
#include "createservicelinkedrolerequest.h"

namespace QtAws {
namespace Iam {

class CreateServiceLinkedRoleResponsePrivate;

class QTAWSIAM_EXPORT CreateServiceLinkedRoleResponse : public IamResponse {
    Q_OBJECT

public:
    CreateServiceLinkedRoleResponse(const CreateServiceLinkedRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateServiceLinkedRoleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateServiceLinkedRoleResponse)
    Q_DISABLE_COPY(CreateServiceLinkedRoleResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
