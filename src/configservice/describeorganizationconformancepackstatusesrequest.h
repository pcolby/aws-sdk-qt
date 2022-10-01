// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFORMANCEPACKSTATUSESREQUEST_H
#define QTAWS_DESCRIBEORGANIZATIONCONFORMANCEPACKSTATUSESREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeOrganizationConformancePackStatusesRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeOrganizationConformancePackStatusesRequest : public ConfigServiceRequest {

public:
    DescribeOrganizationConformancePackStatusesRequest(const DescribeOrganizationConformancePackStatusesRequest &other);
    DescribeOrganizationConformancePackStatusesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationConformancePackStatusesRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
