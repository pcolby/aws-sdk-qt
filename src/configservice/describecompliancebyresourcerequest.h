// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPLIANCEBYRESOURCEREQUEST_H
#define QTAWS_DESCRIBECOMPLIANCEBYRESOURCEREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeComplianceByResourceRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeComplianceByResourceRequest : public ConfigServiceRequest {

public:
    DescribeComplianceByResourceRequest(const DescribeComplianceByResourceRequest &other);
    DescribeComplianceByResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeComplianceByResourceRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
