// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SNOWBALLCLIENT_P_H
#define QTAWS_SNOWBALLCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Snowball {

class SnowballClient;

class SnowballClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SnowballClientPrivate(SnowballClient * const q);

private:
    Q_DECLARE_PUBLIC(SnowballClient)
    Q_DISABLE_COPY(SnowballClientPrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif
