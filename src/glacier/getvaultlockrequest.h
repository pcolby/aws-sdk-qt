// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVAULTLOCKREQUEST_H
#define QTAWS_GETVAULTLOCKREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class GetVaultLockRequestPrivate;

class QTAWSGLACIER_EXPORT GetVaultLockRequest : public GlacierRequest {

public:
    GetVaultLockRequest(const GetVaultLockRequest &other);
    GetVaultLockRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVaultLockRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
