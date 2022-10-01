// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOTAUPDATERESPONSE_P_H
#define QTAWS_GETOTAUPDATERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class GetOTAUpdateResponse;

class GetOTAUpdateResponsePrivate : public IoTResponsePrivate {

public:

    explicit GetOTAUpdateResponsePrivate(GetOTAUpdateResponse * const q);

    void parseGetOTAUpdateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOTAUpdateResponse)
    Q_DISABLE_COPY(GetOTAUpdateResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
