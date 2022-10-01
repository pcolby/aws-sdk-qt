// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVAULTACCESSPOLICYRESPONSE_P_H
#define QTAWS_GETVAULTACCESSPOLICYRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class GetVaultAccessPolicyResponse;

class GetVaultAccessPolicyResponsePrivate : public GlacierResponsePrivate {

public:

    explicit GetVaultAccessPolicyResponsePrivate(GetVaultAccessPolicyResponse * const q);

    void parseGetVaultAccessPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVaultAccessPolicyResponse)
    Q_DISABLE_COPY(GetVaultAccessPolicyResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
