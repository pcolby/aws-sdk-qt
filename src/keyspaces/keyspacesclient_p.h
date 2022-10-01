// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KEYSPACESCLIENT_P_H
#define QTAWS_KEYSPACESCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Keyspaces {

class KeyspacesClient;

class KeyspacesClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit KeyspacesClientPrivate(KeyspacesClient * const q);

private:
    Q_DECLARE_PUBLIC(KeyspacesClient)
    Q_DISABLE_COPY(KeyspacesClientPrivate)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
