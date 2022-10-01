// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTEXTKEYSFORPRINCIPALPOLICYRESPONSE_P_H
#define QTAWS_GETCONTEXTKEYSFORPRINCIPALPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetContextKeysForPrincipalPolicyResponse;

class GetContextKeysForPrincipalPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit GetContextKeysForPrincipalPolicyResponsePrivate(GetContextKeysForPrincipalPolicyResponse * const q);

    void parseGetContextKeysForPrincipalPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetContextKeysForPrincipalPolicyResponse)
    Q_DISABLE_COPY(GetContextKeysForPrincipalPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
