// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONPOLICYRESPONSE_P_H
#define QTAWS_DELETEPERMISSIONPOLICYRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class DeletePermissionPolicyResponse;

class DeletePermissionPolicyResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit DeletePermissionPolicyResponsePrivate(DeletePermissionPolicyResponse * const q);

    void parseDeletePermissionPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePermissionPolicyResponse)
    Q_DISABLE_COPY(DeletePermissionPolicyResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
