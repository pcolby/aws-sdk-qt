// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGEOFENCECOLLECTIONRESPONSE_P_H
#define QTAWS_DESCRIBEGEOFENCECOLLECTIONRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class DescribeGeofenceCollectionResponse;

class DescribeGeofenceCollectionResponsePrivate : public LocationResponsePrivate {

public:

    explicit DescribeGeofenceCollectionResponsePrivate(DescribeGeofenceCollectionResponse * const q);

    void parseDescribeGeofenceCollectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGeofenceCollectionResponse)
    Q_DISABLE_COPY(DescribeGeofenceCollectionResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
