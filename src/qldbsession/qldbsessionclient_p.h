// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QLDBSESSIONCLIENT_P_H
#define QTAWS_QLDBSESSIONCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace QldbSession {

class QldbSessionClient;

class QldbSessionClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit QldbSessionClientPrivate(QldbSessionClient * const q);

private:
    Q_DECLARE_PUBLIC(QldbSessionClient)
    Q_DISABLE_COPY(QldbSessionClientPrivate)

};

} // namespace QldbSession
} // namespace QtAws

#endif
