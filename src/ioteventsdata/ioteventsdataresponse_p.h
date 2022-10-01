// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTEVENTSDATARESPONSE_P_H
#define QTAWS_IOTEVENTSDATARESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace IoTEventsData {

class IoTEventsDataResponse;

class IoTEventsDataResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit IoTEventsDataResponsePrivate(IoTEventsDataResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IoTEventsDataResponse)
    Q_DISABLE_COPY(IoTEventsDataResponsePrivate)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
