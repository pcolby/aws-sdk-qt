// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTEXTKEYSFORPRINCIPALPOLICYRESPONSE_H
#define QTAWS_GETCONTEXTKEYSFORPRINCIPALPOLICYRESPONSE_H

#include "iamresponse.h"
#include "getcontextkeysforprincipalpolicyrequest.h"

namespace QtAws {
namespace Iam {

class GetContextKeysForPrincipalPolicyResponsePrivate;

class QTAWSIAM_EXPORT GetContextKeysForPrincipalPolicyResponse : public IamResponse {
    Q_OBJECT

public:
    GetContextKeysForPrincipalPolicyResponse(const GetContextKeysForPrincipalPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetContextKeysForPrincipalPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetContextKeysForPrincipalPolicyResponse)
    Q_DISABLE_COPY(GetContextKeysForPrincipalPolicyResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
