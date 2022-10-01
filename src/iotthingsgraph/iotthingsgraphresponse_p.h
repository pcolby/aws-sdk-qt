// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTTHINGSGRAPHRESPONSE_P_H
#define QTAWS_IOTTHINGSGRAPHRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace IoTThingsGraph {

class IoTThingsGraphResponse;

class IoTThingsGraphResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit IoTThingsGraphResponsePrivate(IoTThingsGraphResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IoTThingsGraphResponse)
    Q_DISABLE_COPY(IoTThingsGraphResponsePrivate)

};

} // namespace IoTThingsGraph
} // namespace QtAws

#endif
