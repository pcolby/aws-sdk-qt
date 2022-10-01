// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVAULTACCESSPOLICYRESPONSE_H
#define QTAWS_GETVAULTACCESSPOLICYRESPONSE_H

#include "glacierresponse.h"
#include "getvaultaccesspolicyrequest.h"

namespace QtAws {
namespace Glacier {

class GetVaultAccessPolicyResponsePrivate;

class QTAWSGLACIER_EXPORT GetVaultAccessPolicyResponse : public GlacierResponse {
    Q_OBJECT

public:
    GetVaultAccessPolicyResponse(const GetVaultAccessPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVaultAccessPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVaultAccessPolicyResponse)
    Q_DISABLE_COPY(GetVaultAccessPolicyResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
