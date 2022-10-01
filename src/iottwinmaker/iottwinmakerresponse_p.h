// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTTWINMAKERRESPONSE_P_H
#define QTAWS_IOTTWINMAKERRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace IoTTwinMaker {

class IoTTwinMakerResponse;

class IoTTwinMakerResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit IoTTwinMakerResponsePrivate(IoTTwinMakerResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IoTTwinMakerResponse)
    Q_DISABLE_COPY(IoTTwinMakerResponsePrivate)

};

} // namespace IoTTwinMaker
} // namespace QtAws

#endif
