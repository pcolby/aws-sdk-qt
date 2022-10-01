// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFORMANCEPACKSTATUSREQUEST_H
#define QTAWS_DESCRIBECONFORMANCEPACKSTATUSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConformancePackStatusRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeConformancePackStatusRequest : public ConfigServiceRequest {

public:
    DescribeConformancePackStatusRequest(const DescribeConformancePackStatusRequest &other);
    DescribeConformancePackStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConformancePackStatusRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
