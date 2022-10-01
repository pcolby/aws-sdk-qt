// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFORMANCEPACKSREQUEST_H
#define QTAWS_DESCRIBEORGANIZATIONCONFORMANCEPACKSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeOrganizationConformancePacksRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeOrganizationConformancePacksRequest : public ConfigServiceRequest {

public:
    DescribeOrganizationConformancePacksRequest(const DescribeOrganizationConformancePacksRequest &other);
    DescribeOrganizationConformancePacksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationConformancePacksRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
