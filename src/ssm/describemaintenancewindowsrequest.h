// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWSREQUEST_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowsRequestPrivate;

class QTAWSSSM_EXPORT DescribeMaintenanceWindowsRequest : public SsmRequest {

public:
    DescribeMaintenanceWindowsRequest(const DescribeMaintenanceWindowsRequest &other);
    DescribeMaintenanceWindowsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMaintenanceWindowsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
