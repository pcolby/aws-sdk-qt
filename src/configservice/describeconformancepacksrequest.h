// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFORMANCEPACKSREQUEST_H
#define QTAWS_DESCRIBECONFORMANCEPACKSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConformancePacksRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeConformancePacksRequest : public ConfigServiceRequest {

public:
    DescribeConformancePacksRequest(const DescribeConformancePacksRequest &other);
    DescribeConformancePacksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConformancePacksRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
