// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGEOFENCECOLLECTIONRESPONSE_H
#define QTAWS_DESCRIBEGEOFENCECOLLECTIONRESPONSE_H

#include "locationresponse.h"
#include "describegeofencecollectionrequest.h"

namespace QtAws {
namespace Location {

class DescribeGeofenceCollectionResponsePrivate;

class QTAWSLOCATION_EXPORT DescribeGeofenceCollectionResponse : public LocationResponse {
    Q_OBJECT

public:
    DescribeGeofenceCollectionResponse(const DescribeGeofenceCollectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGeofenceCollectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGeofenceCollectionResponse)
    Q_DISABLE_COPY(DescribeGeofenceCollectionResponse)

};

} // namespace Location
} // namespace QtAws

#endif
