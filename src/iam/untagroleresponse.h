// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGROLERESPONSE_H
#define QTAWS_UNTAGROLERESPONSE_H

#include "iamresponse.h"
#include "untagrolerequest.h"

namespace QtAws {
namespace Iam {

class UntagRoleResponsePrivate;

class QTAWSIAM_EXPORT UntagRoleResponse : public IamResponse {
    Q_OBJECT

public:
    UntagRoleResponse(const UntagRoleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UntagRoleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagRoleResponse)
    Q_DISABLE_COPY(UntagRoleResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
