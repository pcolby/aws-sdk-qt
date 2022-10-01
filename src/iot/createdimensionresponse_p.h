// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIMENSIONRESPONSE_P_H
#define QTAWS_CREATEDIMENSIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class CreateDimensionResponse;

class CreateDimensionResponsePrivate : public IoTResponsePrivate {

public:

    explicit CreateDimensionResponsePrivate(CreateDimensionResponse * const q);

    void parseCreateDimensionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDimensionResponse)
    Q_DISABLE_COPY(CreateDimensionResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
