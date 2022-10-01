// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEMAILIDENTITYPOLICYRESPONSE_P_H
#define QTAWS_CREATEEMAILIDENTITYPOLICYRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class CreateEmailIdentityPolicyResponse;

class CreateEmailIdentityPolicyResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit CreateEmailIdentityPolicyResponsePrivate(CreateEmailIdentityPolicyResponse * const q);

    void parseCreateEmailIdentityPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEmailIdentityPolicyResponse)
    Q_DISABLE_COPY(CreateEmailIdentityPolicyResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
