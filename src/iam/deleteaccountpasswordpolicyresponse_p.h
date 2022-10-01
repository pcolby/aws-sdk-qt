// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTPASSWORDPOLICYRESPONSE_P_H
#define QTAWS_DELETEACCOUNTPASSWORDPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DeleteAccountPasswordPolicyResponse;

class DeleteAccountPasswordPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit DeleteAccountPasswordPolicyResponsePrivate(DeleteAccountPasswordPolicyResponse * const q);

    void parseDeleteAccountPasswordPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAccountPasswordPolicyResponse)
    Q_DISABLE_COPY(DeleteAccountPasswordPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
