// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTJOBSDATAPLANERESPONSE_P_H
#define QTAWS_IOTJOBSDATAPLANERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace IoTJobsDataPlane {

class IoTJobsDataPlaneResponse;

class IoTJobsDataPlaneResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit IoTJobsDataPlaneResponsePrivate(IoTJobsDataPlaneResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IoTJobsDataPlaneResponse)
    Q_DISABLE_COPY(IoTJobsDataPlaneResponsePrivate)

};

} // namespace IoTJobsDataPlane
} // namespace QtAws

#endif
