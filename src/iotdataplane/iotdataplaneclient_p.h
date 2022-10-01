// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTDATAPLANECLIENT_P_H
#define QTAWS_IOTDATAPLANECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace IoTDataPlane {

class IoTDataPlaneClient;

class IoTDataPlaneClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IoTDataPlaneClientPrivate(IoTDataPlaneClient * const q);

private:
    Q_DECLARE_PUBLIC(IoTDataPlaneClient)
    Q_DISABLE_COPY(IoTDataPlaneClientPrivate)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
