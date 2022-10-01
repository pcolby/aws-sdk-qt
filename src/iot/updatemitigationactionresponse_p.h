// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMITIGATIONACTIONRESPONSE_P_H
#define QTAWS_UPDATEMITIGATIONACTIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateMitigationActionResponse;

class UpdateMitigationActionResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateMitigationActionResponsePrivate(UpdateMitigationActionResponse * const q);

    void parseUpdateMitigationActionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMitigationActionResponse)
    Q_DISABLE_COPY(UpdateMitigationActionResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
