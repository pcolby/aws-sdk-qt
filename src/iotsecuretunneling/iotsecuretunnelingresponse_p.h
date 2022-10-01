// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTSECURETUNNELINGRESPONSE_P_H
#define QTAWS_IOTSECURETUNNELINGRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace IoTSecureTunneling {

class IoTSecureTunnelingResponse;

class IoTSecureTunnelingResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit IoTSecureTunnelingResponsePrivate(IoTSecureTunnelingResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(IoTSecureTunnelingResponse)
    Q_DISABLE_COPY(IoTSecureTunnelingResponsePrivate)

};

} // namespace IoTSecureTunneling
} // namespace QtAws

#endif
