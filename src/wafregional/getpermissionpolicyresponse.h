// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERMISSIONPOLICYRESPONSE_H
#define QTAWS_GETPERMISSIONPOLICYRESPONSE_H

#include "wafregionalresponse.h"
#include "getpermissionpolicyrequest.h"

namespace QtAws {
namespace WafRegional {

class GetPermissionPolicyResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT GetPermissionPolicyResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    GetPermissionPolicyResponse(const GetPermissionPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPermissionPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPermissionPolicyResponse)
    Q_DISABLE_COPY(GetPermissionPolicyResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
