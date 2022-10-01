// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTTWINMAKERCLIENT_P_H
#define QTAWS_IOTTWINMAKERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace IoTTwinMaker {

class IoTTwinMakerClient;

class IoTTwinMakerClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IoTTwinMakerClientPrivate(IoTTwinMakerClient * const q);

private:
    Q_DECLARE_PUBLIC(IoTTwinMakerClient)
    Q_DISABLE_COPY(IoTTwinMakerClientPrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
