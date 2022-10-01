// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWSFORTARGETREQUEST_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWSFORTARGETREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowsForTargetRequestPrivate;

class QTAWSSSM_EXPORT DescribeMaintenanceWindowsForTargetRequest : public SsmRequest {

public:
    DescribeMaintenanceWindowsForTargetRequest(const DescribeMaintenanceWindowsForTargetRequest &other);
    DescribeMaintenanceWindowsForTargetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMaintenanceWindowsForTargetRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
