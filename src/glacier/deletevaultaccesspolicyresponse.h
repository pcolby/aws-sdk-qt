// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVAULTACCESSPOLICYRESPONSE_H
#define QTAWS_DELETEVAULTACCESSPOLICYRESPONSE_H

#include "glacierresponse.h"
#include "deletevaultaccesspolicyrequest.h"

namespace QtAws {
namespace Glacier {

class DeleteVaultAccessPolicyResponsePrivate;

class QTAWSGLACIER_EXPORT DeleteVaultAccessPolicyResponse : public GlacierResponse {
    Q_OBJECT

public:
    DeleteVaultAccessPolicyResponse(const DeleteVaultAccessPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVaultAccessPolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVaultAccessPolicyResponse)
    Q_DISABLE_COPY(DeleteVaultAccessPolicyResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
