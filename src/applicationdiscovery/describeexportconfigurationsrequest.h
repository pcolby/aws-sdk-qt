// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTCONFIGURATIONSREQUEST_H
#define QTAWS_DESCRIBEEXPORTCONFIGURATIONSREQUEST_H

#include "applicationdiscoveryrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class DescribeExportConfigurationsRequestPrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT DescribeExportConfigurationsRequest : public ApplicationDiscoveryRequest {

public:
    DescribeExportConfigurationsRequest(const DescribeExportConfigurationsRequest &other);
    DescribeExportConfigurationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExportConfigurationsRequest)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
