// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPERMISSIONPOLICYREQUEST_H
#define QTAWS_PUTPERMISSIONPOLICYREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class PutPermissionPolicyRequestPrivate;

class QTAWSWAF_EXPORT PutPermissionPolicyRequest : public WafRequest {

public:
    PutPermissionPolicyRequest(const PutPermissionPolicyRequest &other);
    PutPermissionPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPermissionPolicyRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
