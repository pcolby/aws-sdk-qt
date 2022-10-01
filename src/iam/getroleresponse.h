// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROLERESPONSE_H
#define QTAWS_GETROLERESPONSE_H

#include "iamresponse.h"
#include "getrolerequest.h"

namespace QtAws {
namespace Iam {

class GetRoleResponsePrivate;

class QTAWSIAM_EXPORT GetRoleResponse : public IamResponse {
    Q_OBJECT

public:
    GetRoleResponse(const GetRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRoleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRoleResponse)
    Q_DISABLE_COPY(GetRoleResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
