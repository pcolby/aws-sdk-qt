// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GROUNDSTATIONCLIENT_P_H
#define QTAWS_GROUNDSTATIONCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace GroundStation {

class GroundStationClient;

class GroundStationClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit GroundStationClientPrivate(GroundStationClient * const q);

private:
    Q_DECLARE_PUBLIC(GroundStationClient)
    Q_DISABLE_COPY(GroundStationClientPrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
