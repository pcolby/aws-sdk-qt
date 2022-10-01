// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORLDRESPONSE_P_H
#define QTAWS_DESCRIBEWORLDRESPONSE_P_H

#include "robomakerresponse_p.h"

namespace QtAws {
namespace RoboMaker {

class DescribeWorldResponse;

class DescribeWorldResponsePrivate : public RoboMakerResponsePrivate {

public:

    explicit DescribeWorldResponsePrivate(DescribeWorldResponse * const q);

    void parseDescribeWorldResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWorldResponse)
    Q_DISABLE_COPY(DescribeWorldResponsePrivate)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
