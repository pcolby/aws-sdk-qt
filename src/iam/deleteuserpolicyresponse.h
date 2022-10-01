// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPOLICYRESPONSE_H
#define QTAWS_DELETEUSERPOLICYRESPONSE_H

#include "iamresponse.h"
#include "deleteuserpolicyrequest.h"

namespace QtAws {
namespace Iam {

class DeleteUserPolicyResponsePrivate;

class QTAWSIAM_EXPORT DeleteUserPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    DeleteUserPolicyResponse(const DeleteUserPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUserPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserPolicyResponse)
    Q_DISABLE_COPY(DeleteUserPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
