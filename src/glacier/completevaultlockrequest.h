// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPLETEVAULTLOCKREQUEST_H
#define QTAWS_COMPLETEVAULTLOCKREQUEST_H

#include "glacierrequest.h"

namespace QtAws {
namespace Glacier {

class CompleteVaultLockRequestPrivate;

class QTAWSGLACIER_EXPORT CompleteVaultLockRequest : public GlacierRequest {

public:
    CompleteVaultLockRequest(const CompleteVaultLockRequest &other);
    CompleteVaultLockRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CompleteVaultLockRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
