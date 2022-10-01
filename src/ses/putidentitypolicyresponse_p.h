// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTIDENTITYPOLICYRESPONSE_P_H
#define QTAWS_PUTIDENTITYPOLICYRESPONSE_P_H

#include "sesresponse_p.h"

namespace QtAws {
namespace Ses {

class PutIdentityPolicyResponse;

class PutIdentityPolicyResponsePrivate : public SesResponsePrivate {

public:

    explicit PutIdentityPolicyResponsePrivate(PutIdentityPolicyResponse * const q);

    void parsePutIdentityPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutIdentityPolicyResponse)
    Q_DISABLE_COPY(PutIdentityPolicyResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
