// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOCATIONCLIENT_P_H
#define QTAWS_LOCATIONCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Location {

class LocationClient;

class LocationClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit LocationClientPrivate(LocationClient * const q);

private:
    Q_DECLARE_PUBLIC(LocationClient)
    Q_DISABLE_COPY(LocationClientPrivate)

};

} // namespace Location
} // namespace QtAws

#endif
