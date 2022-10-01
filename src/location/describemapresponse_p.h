// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAPRESPONSE_P_H
#define QTAWS_DESCRIBEMAPRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class DescribeMapResponse;

class DescribeMapResponsePrivate : public LocationResponsePrivate {

public:

    explicit DescribeMapResponsePrivate(DescribeMapResponse * const q);

    void parseDescribeMapResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeMapResponse)
    Q_DISABLE_COPY(DescribeMapResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
