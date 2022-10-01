// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONPOLICYRESPONSE_H
#define QTAWS_DELETEPERMISSIONPOLICYRESPONSE_H

#include "wafresponse.h"
#include "deletepermissionpolicyrequest.h"

namespace QtAws {
namespace Waf {

class DeletePermissionPolicyResponsePrivate;

class QTAWSWAF_EXPORT DeletePermissionPolicyResponse : public WafResponse {
    Q_OBJECT

public:
    DeletePermissionPolicyResponse(const DeletePermissionPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePermissionPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePermissionPolicyResponse)
    Q_DISABLE_COPY(DeletePermissionPolicyResponse)

};

} // namespace Waf
} // namespace QtAws

#endif
