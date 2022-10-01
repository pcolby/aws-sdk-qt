// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPERMISSIONPOLICYRESPONSE_H
#define QTAWS_PUTPERMISSIONPOLICYRESPONSE_H

#include "wafv2response.h"
#include "putpermissionpolicyrequest.h"

namespace QtAws {
namespace Wafv2 {

class PutPermissionPolicyResponsePrivate;

class QTAWSWAFV2_EXPORT PutPermissionPolicyResponse : public Wafv2Response {
    Q_OBJECT

public:
    PutPermissionPolicyResponse(const PutPermissionPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutPermissionPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutPermissionPolicyResponse)
    Q_DISABLE_COPY(PutPermissionPolicyResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
