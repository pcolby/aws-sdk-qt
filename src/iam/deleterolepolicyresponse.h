// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROLEPOLICYRESPONSE_H
#define QTAWS_DELETEROLEPOLICYRESPONSE_H

#include "iamresponse.h"
#include "deleterolepolicyrequest.h"

namespace QtAws {
namespace Iam {

class DeleteRolePolicyResponsePrivate;

class QTAWSIAM_EXPORT DeleteRolePolicyResponse : public IamResponse {
    Q_OBJECT

public:
    DeleteRolePolicyResponse(const DeleteRolePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRolePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRolePolicyResponse)
    Q_DISABLE_COPY(DeleteRolePolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
