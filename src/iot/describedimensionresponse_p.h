// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIMENSIONRESPONSE_P_H
#define QTAWS_DESCRIBEDIMENSIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeDimensionResponse;

class DescribeDimensionResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeDimensionResponsePrivate(DescribeDimensionResponse * const q);

    void parseDescribeDimensionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDimensionResponse)
    Q_DISABLE_COPY(DescribeDimensionResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
