// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFORMANCEPACKCOMPLIANCEREQUEST_H
#define QTAWS_DESCRIBECONFORMANCEPACKCOMPLIANCEREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConformancePackComplianceRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeConformancePackComplianceRequest : public ConfigServiceRequest {

public:
    DescribeConformancePackComplianceRequest(const DescribeConformancePackComplianceRequest &other);
    DescribeConformancePackComplianceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConformancePackComplianceRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
