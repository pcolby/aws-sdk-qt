// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONPOLICYRESPONSE_P_H
#define QTAWS_DELETEPERMISSIONPOLICYRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class DeletePermissionPolicyResponse;

class DeletePermissionPolicyResponsePrivate : public WafResponsePrivate {

public:

    explicit DeletePermissionPolicyResponsePrivate(DeletePermissionPolicyResponse * const q);

    void parseDeletePermissionPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePermissionPolicyResponse)
    Q_DISABLE_COPY(DeletePermissionPolicyResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
