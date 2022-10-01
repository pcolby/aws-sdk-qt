// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSFORORGANIZATIONREQUEST_H
#define QTAWS_DESCRIBEEVENTSFORORGANIZATIONREQUEST_H

#include "healthrequest.h"

namespace QtAws {
namespace Health {

class DescribeEventsForOrganizationRequestPrivate;

class QTAWSHEALTH_EXPORT DescribeEventsForOrganizationRequest : public HealthRequest {

public:
    DescribeEventsForOrganizationRequest(const DescribeEventsForOrganizationRequest &other);
    DescribeEventsForOrganizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventsForOrganizationRequest)

};

} // namespace Health
} // namespace QtAws

#endif
