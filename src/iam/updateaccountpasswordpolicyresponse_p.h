// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCOUNTPASSWORDPOLICYRESPONSE_P_H
#define QTAWS_UPDATEACCOUNTPASSWORDPOLICYRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UpdateAccountPasswordPolicyResponse;

class UpdateAccountPasswordPolicyResponsePrivate : public IamResponsePrivate {

public:

    explicit UpdateAccountPasswordPolicyResponsePrivate(UpdateAccountPasswordPolicyResponse * const q);

    void parseUpdateAccountPasswordPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAccountPasswordPolicyResponse)
    Q_DISABLE_COPY(UpdateAccountPasswordPolicyResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
