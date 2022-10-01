// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVAULTACCESSPOLICYREQUEST_H
#define QTAWS_DELETEVAULTACCESSPOLICYREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class DeleteVaultAccessPolicyRequestPrivate;

class QTAWSGLACIER_EXPORT DeleteVaultAccessPolicyRequest : public GlacierRequest {

public:
    DeleteVaultAccessPolicyRequest(const DeleteVaultAccessPolicyRequest &other);
    DeleteVaultAccessPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVaultAccessPolicyRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
