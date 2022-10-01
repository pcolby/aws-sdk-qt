// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERETENTIONCONFIGURATIONSREQUEST_H
#define QTAWS_DESCRIBERETENTIONCONFIGURATIONSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeRetentionConfigurationsRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeRetentionConfigurationsRequest : public ConfigServiceRequest {

public:
    DescribeRetentionConfigurationsRequest(const DescribeRetentionConfigurationsRequest &other);
    DescribeRetentionConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRetentionConfigurationsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
