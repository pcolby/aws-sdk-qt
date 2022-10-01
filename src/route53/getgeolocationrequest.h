// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGEOLOCATIONREQUEST_H
#define QTAWS_GETGEOLOCATIONREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class GetGeoLocationRequestPrivate;

class QTAWSROUTE53_EXPORT GetGeoLocationRequest : public Route53Request {

public:
    GetGeoLocationRequest(const GetGeoLocationRequest &other);
    GetGeoLocationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGeoLocationRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
