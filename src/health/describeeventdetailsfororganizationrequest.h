// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTDETAILSFORORGANIZATIONREQUEST_H
#define QTAWS_DESCRIBEEVENTDETAILSFORORGANIZATIONREQUEST_H

#include "healthrequest.h"

namespace QtAws {
namespace Health {

class DescribeEventDetailsForOrganizationRequestPrivate;

class QTAWSHEALTH_EXPORT DescribeEventDetailsForOrganizationRequest : public HealthRequest {

public:
    DescribeEventDetailsForOrganizationRequest(const DescribeEventDetailsForOrganizationRequest &other);
    DescribeEventDetailsForOrganizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEventDetailsForOrganizationRequest)

};

} // namespace Health
} // namespace QtAws

#endif
