// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRACKERRESPONSE_P_H
#define QTAWS_DESCRIBETRACKERRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class DescribeTrackerResponse;

class DescribeTrackerResponsePrivate : public LocationResponsePrivate {

public:

    explicit DescribeTrackerResponsePrivate(DescribeTrackerResponse * const q);

    void parseDescribeTrackerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTrackerResponse)
    Q_DISABLE_COPY(DescribeTrackerResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
