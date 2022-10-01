// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETVAULTACCESSPOLICYRESPONSE_P_H
#define QTAWS_SETVAULTACCESSPOLICYRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class SetVaultAccessPolicyResponse;

class SetVaultAccessPolicyResponsePrivate : public GlacierResponsePrivate {

public:

    explicit SetVaultAccessPolicyResponsePrivate(SetVaultAccessPolicyResponse * const q);

    void parseSetVaultAccessPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetVaultAccessPolicyResponse)
    Q_DISABLE_COPY(SetVaultAccessPolicyResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
