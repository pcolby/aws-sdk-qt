// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVAULTACCESSPOLICYREQUEST_H
#define QTAWS_GETVAULTACCESSPOLICYREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class GetVaultAccessPolicyRequestPrivate;

class QTAWSGLACIER_EXPORT GetVaultAccessPolicyRequest : public GlacierRequest {

public:
    GetVaultAccessPolicyRequest(const GetVaultAccessPolicyRequest &other);
    GetVaultAccessPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVaultAccessPolicyRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
