// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATAPROTECTIONPOLICYRESPONSE_H
#define QTAWS_GETDATAPROTECTIONPOLICYRESPONSE_H

#include "snsresponse.h"
#include "getdataprotectionpolicyrequest.h"

namespace QtAws {
namespace Sns {

class GetDataProtectionPolicyResponsePrivate;

class QTAWSSNS_EXPORT GetDataProtectionPolicyResponse : public SnsResponse {
    Q_OBJECT

public:
    GetDataProtectionPolicyResponse(const GetDataProtectionPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDataProtectionPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDataProtectionPolicyResponse)
    Q_DISABLE_COPY(GetDataProtectionPolicyResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
