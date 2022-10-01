// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTJOBSDATAPLANECLIENT_P_H
#define QTAWS_IOTJOBSDATAPLANECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace IoTJobsDataPlane {

class IoTJobsDataPlaneClient;

class IoTJobsDataPlaneClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit IoTJobsDataPlaneClientPrivate(IoTJobsDataPlaneClient * const q);

private:
    Q_DECLARE_PUBLIC(IoTJobsDataPlaneClient)
    Q_DISABLE_COPY(IoTJobsDataPlaneClientPrivate)

};

} // namespace IoTJobsDataPlane
} // namespace QtAws

#endif
