// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONPOLICYREQUEST_H
#define QTAWS_DELETEPERMISSIONPOLICYREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class DeletePermissionPolicyRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT DeletePermissionPolicyRequest : public WafRegionalRequest {

public:
    DeletePermissionPolicyRequest(const DeletePermissionPolicyRequest &other);
    DeletePermissionPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePermissionPolicyRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
