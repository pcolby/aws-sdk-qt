// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOTAUPDATERESPONSE_P_H
#define QTAWS_CREATEOTAUPDATERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateOTAUpdateResponse;

class CreateOTAUpdateResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateOTAUpdateResponsePrivate(CreateOTAUpdateResponse * const q);

    void parseCreateOTAUpdateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateOTAUpdateResponse)
    Q_DISABLE_COPY(CreateOTAUpdateResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
