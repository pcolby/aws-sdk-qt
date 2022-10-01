// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONSREQUEST_H
#define QTAWS_DESCRIBECONFIGURATIONSREQUEST_H

#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeConfigurationsRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT DescribeConfigurationsRequest : public ApplicationDiscoveryRequest {

public:
    DescribeConfigurationsRequest(const DescribeConfigurationsRequest &other);
    DescribeConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationsRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
