// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONTASKINVOCATIONSREQUEST_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONTASKINVOCATIONSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowExecutionTaskInvocationsRequestPrivate;

class QTAWSSSM_EXPORT DescribeMaintenanceWindowExecutionTaskInvocationsRequest : public SsmRequest {

public:
    DescribeMaintenanceWindowExecutionTaskInvocationsRequest(const DescribeMaintenanceWindowExecutionTaskInvocationsRequest &other);
    DescribeMaintenanceWindowExecutionTaskInvocationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMaintenanceWindowExecutionTaskInvocationsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
