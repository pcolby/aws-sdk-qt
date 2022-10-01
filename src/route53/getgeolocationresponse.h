// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGEOLOCATIONRESPONSE_H
#define QTAWS_GETGEOLOCATIONRESPONSE_H

#include "route53response.h"
#include "getgeolocationrequest.h"

namespace QtAws {
namespace Route53 {

class GetGeoLocationResponsePrivate;

class QTAWSROUTE53_EXPORT GetGeoLocationResponse : public Route53Response {
    Q_OBJECT

public:
    GetGeoLocationResponse(const GetGeoLocationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetGeoLocationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGeoLocationResponse)
    Q_DISABLE_COPY(GetGeoLocationResponse)

};

} // namespace Route53
} // namespace QtAws

#endif
