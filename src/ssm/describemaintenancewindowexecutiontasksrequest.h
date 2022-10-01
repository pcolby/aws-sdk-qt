// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONTASKSREQUEST_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONTASKSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowExecutionTasksRequestPrivate;

class QTAWSSSM_EXPORT DescribeMaintenanceWindowExecutionTasksRequest : public SsmRequest {

public:
    DescribeMaintenanceWindowExecutionTasksRequest(const DescribeMaintenanceWindowExecutionTasksRequest &other);
    DescribeMaintenanceWindowExecutionTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMaintenanceWindowExecutionTasksRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
