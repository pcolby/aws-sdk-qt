// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53CLIENT_P_H
#define QTAWS_ROUTE53CLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Route53 {

class Route53Client;

class Route53ClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit Route53ClientPrivate(Route53Client * const q);

private:
    Q_DECLARE_PUBLIC(Route53Client)
    Q_DISABLE_COPY(Route53ClientPrivate)

};

} // namespace Route53
} // namespace QtAws

#endif
