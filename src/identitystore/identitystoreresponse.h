// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IDENTITYSTORERESPONSE_H
#define QTAWS_IDENTITYSTORERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsidentitystoreglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace IdentityStore {

class IdentityStoreResponsePrivate;

class QTAWSIDENTITYSTORE_EXPORT IdentityStoreResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    IdentityStoreResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    IdentityStoreResponse(IdentityStoreResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IdentityStoreResponse)
    Q_DISABLE_COPY(IdentityStoreResponse)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
