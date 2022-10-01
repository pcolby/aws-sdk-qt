// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVAULTACCESSPOLICYRESPONSE_P_H
#define QTAWS_DELETEVAULTACCESSPOLICYRESPONSE_P_H

#include "glacierresponse_p.h"

namespace QtAws {
namespace Glacier {

class DeleteVaultAccessPolicyResponse;

class DeleteVaultAccessPolicyResponsePrivate : public GlacierResponsePrivate {

public:

    explicit DeleteVaultAccessPolicyResponsePrivate(DeleteVaultAccessPolicyResponse * const q);

    void parseDeleteVaultAccessPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVaultAccessPolicyResponse)
    Q_DISABLE_COPY(DeleteVaultAccessPolicyResponsePrivate)

};

} // namespace Glacier
} // namespace QtAws

#endif
