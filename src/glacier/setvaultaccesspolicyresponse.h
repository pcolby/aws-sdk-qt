// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETVAULTACCESSPOLICYRESPONSE_H
#define QTAWS_SETVAULTACCESSPOLICYRESPONSE_H

#include "glacierresponse.h"
#include "setvaultaccesspolicyrequest.h"

namespace QtAws {
namespace Glacier {

class SetVaultAccessPolicyResponsePrivate;

class QTAWSGLACIER_EXPORT SetVaultAccessPolicyResponse : public GlacierResponse {
    Q_OBJECT

public:
    SetVaultAccessPolicyResponse(const SetVaultAccessPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetVaultAccessPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetVaultAccessPolicyResponse)
    Q_DISABLE_COPY(SetVaultAccessPolicyResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
