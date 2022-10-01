// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBTEMPLATERESPONSE_P_H
#define QTAWS_DESCRIBEJOBTEMPLATERESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class DescribeJobTemplateResponse;

class DescribeJobTemplateResponsePrivate : public IoTResponsePrivate {

public:

    explicit DescribeJobTemplateResponsePrivate(DescribeJobTemplateResponse * const q);

    void parseDescribeJobTemplateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeJobTemplateResponse)
    Q_DISABLE_COPY(DescribeJobTemplateResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
