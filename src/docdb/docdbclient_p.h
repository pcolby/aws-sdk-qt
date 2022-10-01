// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DOCDBCLIENT_P_H
#define QTAWS_DOCDBCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace DocDb {

class DocDbClient;

class DocDbClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit DocDbClientPrivate(DocDbClient * const q);

private:
    Q_DECLARE_PUBLIC(DocDbClient)
    Q_DISABLE_COPY(DocDbClientPrivate)

};

} // namespace DocDb
} // namespace QtAws

#endif
