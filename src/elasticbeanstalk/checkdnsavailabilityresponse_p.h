// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKDNSAVAILABILITYRESPONSE_P_H
#define QTAWS_CHECKDNSAVAILABILITYRESPONSE_P_H

#include "elasticbeanstalkresponse_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CheckDNSAvailabilityResponse;

class CheckDNSAvailabilityResponsePrivate : public ElasticBeanstalkResponsePrivate {

public:

    explicit CheckDNSAvailabilityResponsePrivate(CheckDNSAvailabilityResponse * const q);

    void parseCheckDNSAvailabilityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CheckDNSAvailabilityResponse)
    Q_DISABLE_COPY(CheckDNSAvailabilityResponsePrivate)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
