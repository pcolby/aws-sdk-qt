// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETVAULTACCESSPOLICYREQUEST_H
#define QTAWS_SETVAULTACCESSPOLICYREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class SetVaultAccessPolicyRequestPrivate;

class QTAWSGLACIER_EXPORT SetVaultAccessPolicyRequest : public GlacierRequest {

public:
    SetVaultAccessPolicyRequest(const SetVaultAccessPolicyRequest &other);
    SetVaultAccessPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetVaultAccessPolicyRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
