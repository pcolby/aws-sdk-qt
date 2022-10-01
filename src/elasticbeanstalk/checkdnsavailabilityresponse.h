// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKDNSAVAILABILITYRESPONSE_H
#define QTAWS_CHECKDNSAVAILABILITYRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "checkdnsavailabilityrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CheckDNSAvailabilityResponsePrivate;

class QTAWSELASTICBEANSTALK_EXPORT CheckDNSAvailabilityResponse : public ElasticBeanstalkResponse {
    Q_OBJECT

public:
    CheckDNSAvailabilityResponse(const CheckDNSAvailabilityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CheckDNSAvailabilityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CheckDNSAvailabilityResponse)
    Q_DISABLE_COPY(CheckDNSAvailabilityResponse)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
