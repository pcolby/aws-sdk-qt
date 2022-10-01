// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LAMBDACLIENT_P_H
#define QTAWS_LAMBDACLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Lambda {

class LambdaClient;

class LambdaClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit LambdaClientPrivate(LambdaClient * const q);

private:
    Q_DECLARE_PUBLIC(LambdaClient)
    Q_DISABLE_COPY(LambdaClientPrivate)

};

} // namespace Lambda
} // namespace QtAws

#endif
