// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTPASSWORDPOLICYRESPONSE_H
#define QTAWS_GETACCOUNTPASSWORDPOLICYRESPONSE_H

#include "iamresponse.h"
#include "getaccountpasswordpolicyrequest.h"

namespace QtAws {
namespace Iam {

class GetAccountPasswordPolicyResponsePrivate;

class QTAWSIAM_EXPORT GetAccountPasswordPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    GetAccountPasswordPolicyResponse(const GetAccountPasswordPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccountPasswordPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAccountPasswordPolicyResponse)
    Q_DISABLE_COPY(GetAccountPasswordPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
