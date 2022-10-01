// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTDATAPLANERESPONSE_P_H
#define QTAWS_IOTDATAPLANERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace IoTDataPlane {

class IoTDataPlaneResponse;

class IoTDataPlaneResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit IoTDataPlaneResponsePrivate(IoTDataPlaneResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IoTDataPlaneResponse)
    Q_DISABLE_COPY(IoTDataPlaneResponsePrivate)

};

} // namespace IoTDataPlane
} // namespace QtAws

#endif
