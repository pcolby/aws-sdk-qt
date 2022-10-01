// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDATAPROTECTIONPOLICYRESPONSE_P_H
#define QTAWS_PUTDATAPROTECTIONPOLICYRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class PutDataProtectionPolicyResponse;

class PutDataProtectionPolicyResponsePrivate : public SnsResponsePrivate {

public:

    explicit PutDataProtectionPolicyResponsePrivate(PutDataProtectionPolicyResponse * const q);

    void parsePutDataProtectionPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutDataProtectionPolicyResponse)
    Q_DISABLE_COPY(PutDataProtectionPolicyResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
