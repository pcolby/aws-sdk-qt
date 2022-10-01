// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPERMISSIONPOLICYRESPONSE_P_H
#define QTAWS_PUTPERMISSIONPOLICYRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class PutPermissionPolicyResponse;

class PutPermissionPolicyResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit PutPermissionPolicyResponsePrivate(PutPermissionPolicyResponse * const q);

    void parsePutPermissionPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutPermissionPolicyResponse)
    Q_DISABLE_COPY(PutPermissionPolicyResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
