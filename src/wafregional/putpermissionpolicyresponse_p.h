// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPERMISSIONPOLICYRESPONSE_P_H
#define QTAWS_PUTPERMISSIONPOLICYRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class PutPermissionPolicyResponse;

class PutPermissionPolicyResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit PutPermissionPolicyResponsePrivate(PutPermissionPolicyResponse * const q);

    void parsePutPermissionPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutPermissionPolicyResponse)
    Q_DISABLE_COPY(PutPermissionPolicyResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
