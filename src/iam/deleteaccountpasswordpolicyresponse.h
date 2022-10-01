// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTPASSWORDPOLICYRESPONSE_H
#define QTAWS_DELETEACCOUNTPASSWORDPOLICYRESPONSE_H

#include "iamresponse.h"
#include "deleteaccountpasswordpolicyrequest.h"

namespace QtAws {
namespace Iam {

class DeleteAccountPasswordPolicyResponsePrivate;

class QTAWSIAM_EXPORT DeleteAccountPasswordPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    DeleteAccountPasswordPolicyResponse(const DeleteAccountPasswordPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAccountPasswordPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAccountPasswordPolicyResponse)
    Q_DISABLE_COPY(DeleteAccountPasswordPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
