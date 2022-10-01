// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPERMISSIONPOLICYREQUEST_H
#define QTAWS_GETPERMISSIONPOLICYREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class GetPermissionPolicyRequestPrivate;

class QTAWSWAFV2_EXPORT GetPermissionPolicyRequest : public Wafv2Request {

public:
    GetPermissionPolicyRequest(const GetPermissionPolicyRequest &other);
    GetPermissionPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPermissionPolicyRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
