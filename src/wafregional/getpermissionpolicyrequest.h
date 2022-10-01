// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERMISSIONPOLICYREQUEST_H
#define QTAWS_GETPERMISSIONPOLICYREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class GetPermissionPolicyRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT GetPermissionPolicyRequest : public WafRegionalRequest {

public:
    GetPermissionPolicyRequest(const GetPermissionPolicyRequest &other);
    GetPermissionPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPermissionPolicyRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
