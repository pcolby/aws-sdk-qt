// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QLDBCLIENT_P_H
#define QTAWS_QLDBCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Qldb {

class QldbClient;

class QldbClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit QldbClientPrivate(QldbClient * const q);

private:
    Q_DECLARE_PUBLIC(QldbClient)
    Q_DISABLE_COPY(QldbClientPrivate)

};

} // namespace Qldb
} // namespace QtAws

#endif
