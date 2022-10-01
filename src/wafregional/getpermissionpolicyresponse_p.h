// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERMISSIONPOLICYRESPONSE_P_H
#define QTAWS_GETPERMISSIONPOLICYRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class GetPermissionPolicyResponse;

class GetPermissionPolicyResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit GetPermissionPolicyResponsePrivate(GetPermissionPolicyResponse * const q);

    void parseGetPermissionPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPermissionPolicyResponse)
    Q_DISABLE_COPY(GetPermissionPolicyResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
