// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEMORYDBCLIENT_P_H
#define QTAWS_MEMORYDBCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace MemoryDb {

class MemoryDbClient;

class MemoryDbClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MemoryDbClientPrivate(MemoryDbClient * const q);

private:
    Q_DECLARE_PUBLIC(MemoryDbClient)
    Q_DISABLE_COPY(MemoryDbClientPrivate)

};

} // namespace MemoryDb
} // namespace QtAws

#endif
