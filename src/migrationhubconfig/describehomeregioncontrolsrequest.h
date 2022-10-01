// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHOMEREGIONCONTROLSREQUEST_H
#define QTAWS_DESCRIBEHOMEREGIONCONTROLSREQUEST_H

#include "migrationhubconfigrequest.h"

namespace QtAws {
namespace MigrationHubConfig {

class DescribeHomeRegionControlsRequestPrivate;

class QTAWSMIGRATIONHUBCONFIG_EXPORT DescribeHomeRegionControlsRequest : public MigrationHubConfigRequest {

public:
    DescribeHomeRegionControlsRequest(const DescribeHomeRegionControlsRequest &other);
    DescribeHomeRegionControlsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHomeRegionControlsRequest)

};

} // namespace MigrationHubConfig
} // namespace QtAws

#endif
