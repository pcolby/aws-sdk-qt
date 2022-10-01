// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONPOLICYRESPONSE_P_H
#define QTAWS_DELETEPERMISSIONPOLICYRESPONSE_P_H

#include "wafregionalresponse_p.h"

namespace QtAws {
namespace WafRegional {

class DeletePermissionPolicyResponse;

class DeletePermissionPolicyResponsePrivate : public WafRegionalResponsePrivate {

public:

    explicit DeletePermissionPolicyResponsePrivate(DeletePermissionPolicyResponse * const q);

    void parseDeletePermissionPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePermissionPolicyResponse)
    Q_DISABLE_COPY(DeletePermissionPolicyResponsePrivate)

};

} // namespace WafRegional
} // namespace QtAws

#endif
