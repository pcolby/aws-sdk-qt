// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTFLEETHUBRESPONSE_P_H
#define QTAWS_IOTFLEETHUBRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace IoTFleetHub {

class IoTFleetHubResponse;

class IoTFleetHubResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit IoTFleetHubResponsePrivate(IoTFleetHubResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IoTFleetHubResponse)
    Q_DISABLE_COPY(IoTFleetHubResponsePrivate)

};

} // namespace IoTFleetHub
} // namespace QtAws

#endif
