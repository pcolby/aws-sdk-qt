// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MANAGEDBLOCKCHAINRESPONSE_H
#define QTAWS_MANAGEDBLOCKCHAINRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsmanagedblockchainglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ManagedBlockchain {

class ManagedBlockchainResponsePrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT ManagedBlockchainResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ManagedBlockchainResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ManagedBlockchainResponse(ManagedBlockchainResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ManagedBlockchainResponse)
    Q_DISABLE_COPY(ManagedBlockchainResponse)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
