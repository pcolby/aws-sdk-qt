// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SQSCLIENT_P_H
#define QTAWS_SQSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Sqs {

class SqsClient;

class SqsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SqsClientPrivate(SqsClient * const q);

private:
    Q_DECLARE_PUBLIC(SqsClient)
    Q_DISABLE_COPY(SqsClientPrivate)

};

} // namespace Sqs
} // namespace QtAws

#endif
