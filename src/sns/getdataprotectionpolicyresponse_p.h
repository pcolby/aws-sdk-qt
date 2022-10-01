// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAPROTECTIONPOLICYRESPONSE_P_H
#define QTAWS_GETDATAPROTECTIONPOLICYRESPONSE_P_H

#include "snsresponse_p.h"

namespace QtAws {
namespace Sns {

class GetDataProtectionPolicyResponse;

class GetDataProtectionPolicyResponsePrivate : public SnsResponsePrivate {

public:

    explicit GetDataProtectionPolicyResponsePrivate(GetDataProtectionPolicyResponse * const q);

    void parseGetDataProtectionPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDataProtectionPolicyResponse)
    Q_DISABLE_COPY(GetDataProtectionPolicyResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
