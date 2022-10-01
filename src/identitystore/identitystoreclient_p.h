// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IDENTITYSTORECLIENT_P_H
#define QTAWS_IDENTITYSTORECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace IdentityStore {

class IdentityStoreClient;

class IdentityStoreClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IdentityStoreClientPrivate(IdentityStoreClient * const q);

private:
    Q_DECLARE_PUBLIC(IdentityStoreClient)
    Q_DISABLE_COPY(IdentityStoreClientPrivate)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
