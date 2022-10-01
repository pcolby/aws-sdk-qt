// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETACCOUNTPASSWORDPOLICYRESPONSE_P_H
#define QTAWS_GETACCOUNTPASSWORDPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetAccountPasswordPolicyResponse;

class GetAccountPasswordPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit GetAccountPasswordPolicyResponsePrivate(GetAccountPasswordPolicyResponse * const q);

    void parseGetAccountPasswordPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetAccountPasswordPolicyResponse)
    Q_DISABLE_COPY(GetAccountPasswordPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
