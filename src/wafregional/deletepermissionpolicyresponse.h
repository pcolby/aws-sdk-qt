// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPERMISSIONPOLICYRESPONSE_H
#define QTAWS_DELETEPERMISSIONPOLICYRESPONSE_H

#include "wafregionalresponse.h"
#include "deletepermissionpolicyrequest.h"

namespace QtAws {
namespace WafRegional {

class DeletePermissionPolicyResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT DeletePermissionPolicyResponse : public WafRegionalResponse {
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

} // namespace WafRegional
} // namespace QtAws

#endif
