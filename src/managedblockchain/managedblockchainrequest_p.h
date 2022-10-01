// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MANAGEDBLOCKCHAINREQUEST_P_H
#define QTAWS_MANAGEDBLOCKCHAINREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "managedblockchainrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class ManagedBlockchainRequest;

class ManagedBlockchainRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ManagedBlockchainRequest::Action action; ///< ManagedBlockchain action to be performed.
    QString apiVersion;        ///< ManagedBlockchain API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ManagedBlockchain request (query string) parameters. @todo?

    ManagedBlockchainRequestPrivate(const ManagedBlockchainRequest::Action action, ManagedBlockchainRequest * const q);
    ManagedBlockchainRequestPrivate(const ManagedBlockchainRequestPrivate &other, ManagedBlockchainRequest * const q);

    static QString toString(const ManagedBlockchainRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ManagedBlockchainRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
