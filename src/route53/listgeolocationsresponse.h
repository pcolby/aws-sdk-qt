// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGEOLOCATIONSRESPONSE_H
#define QTAWS_LISTGEOLOCATIONSRESPONSE_H

#include "route53response.h"
#include "listgeolocationsrequest.h"

namespace QtAws {
namespace Route53 {

class ListGeoLocationsResponsePrivate;

class QTAWSROUTE53_EXPORT ListGeoLocationsResponse : public Route53Response {
    Q_OBJECT

public:
    ListGeoLocationsResponse(const ListGeoLocationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGeoLocationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGeoLocationsResponse)
    Q_DISABLE_COPY(ListGeoLocationsResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
