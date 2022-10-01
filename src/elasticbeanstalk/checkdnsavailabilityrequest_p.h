// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKDNSAVAILABILITYREQUEST_P_H
#define QTAWS_CHECKDNSAVAILABILITYREQUEST_P_H

#include "elasticbeanstalkrequest_p.h"
#include "checkdnsavailabilityrequest.h"

namespace QtAws {
namespace ElasticBeanstalk {

class CheckDNSAvailabilityRequest;

class CheckDNSAvailabilityRequestPrivate : public ElasticBeanstalkRequestPrivate {

public:
    CheckDNSAvailabilityRequestPrivate(const ElasticBeanstalkRequest::Action action,
                                   CheckDNSAvailabilityRequest * const q);
    CheckDNSAvailabilityRequestPrivate(const CheckDNSAvailabilityRequestPrivate &other,
                                   CheckDNSAvailabilityRequest * const q);

private:
    Q_DECLARE_PUBLIC(CheckDNSAvailabilityRequest)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
