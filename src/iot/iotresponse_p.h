// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTRESPONSE_P_H
#define QTAWS_IOTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace IoT {

class IoTResponse;

class IoTResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit IoTResponsePrivate(IoTResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IoTResponse)
    Q_DISABLE_COPY(IoTResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
