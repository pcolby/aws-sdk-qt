// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INITIATEVAULTLOCKREQUEST_H
#define QTAWS_INITIATEVAULTLOCKREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class InitiateVaultLockRequestPrivate;

class QTAWSGLACIER_EXPORT InitiateVaultLockRequest : public GlacierRequest {

public:
    InitiateVaultLockRequest(const InitiateVaultLockRequest &other);
    InitiateVaultLockRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InitiateVaultLockRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
