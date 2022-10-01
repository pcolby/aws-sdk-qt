// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDIMENSIONRESPONSE_P_H
#define QTAWS_UPDATEDIMENSIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class UpdateDimensionResponse;

class UpdateDimensionResponsePrivate : public IoTResponsePrivate {

public:

    explicit UpdateDimensionResponsePrivate(UpdateDimensionResponse * const q);

    void parseUpdateDimensionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDimensionResponse)
    Q_DISABLE_COPY(UpdateDimensionResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
