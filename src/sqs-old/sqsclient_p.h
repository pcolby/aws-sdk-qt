// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSCLIENT_P_H
#define SQSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace SqsOld {

class SqsClient;

class SqsClientPrivate : public AwsAbstractClientPrivate {

public:
    SqsClientPrivate(SqsClient * const q);

private:
    Q_DECLARE_PUBLIC(SqsClient)
    Q_DISABLE_COPY(SqsClientPrivate)

};

} // namespace SqsOld
} // namespace QtAws

#endif
