// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILIDENTITYPOLICYRESPONSE_P_H
#define QTAWS_DELETEEMAILIDENTITYPOLICYRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class DeleteEmailIdentityPolicyResponse;

class DeleteEmailIdentityPolicyResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit DeleteEmailIdentityPolicyResponsePrivate(DeleteEmailIdentityPolicyResponse * const q);

    void parseDeleteEmailIdentityPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEmailIdentityPolicyResponse)
    Q_DISABLE_COPY(DeleteEmailIdentityPolicyResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
