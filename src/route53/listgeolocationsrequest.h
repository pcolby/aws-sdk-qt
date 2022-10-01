// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGEOLOCATIONSREQUEST_H
#define QTAWS_LISTGEOLOCATIONSREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ListGeoLocationsRequestPrivate;

class QTAWSROUTE53_EXPORT ListGeoLocationsRequest : public Route53Request {

public:
    ListGeoLocationsRequest(const ListGeoLocationsRequest &other);
    ListGeoLocationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGeoLocationsRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
