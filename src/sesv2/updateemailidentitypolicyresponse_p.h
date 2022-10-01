// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEMAILIDENTITYPOLICYRESPONSE_P_H
#define QTAWS_UPDATEEMAILIDENTITYPOLICYRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class UpdateEmailIdentityPolicyResponse;

class UpdateEmailIdentityPolicyResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit UpdateEmailIdentityPolicyResponsePrivate(UpdateEmailIdentityPolicyResponse * const q);

    void parseUpdateEmailIdentityPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEmailIdentityPolicyResponse)
    Q_DISABLE_COPY(UpdateEmailIdentityPolicyResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
