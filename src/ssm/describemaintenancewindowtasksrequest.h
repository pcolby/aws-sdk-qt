// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWTASKSREQUEST_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWTASKSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowTasksRequestPrivate;

class QTAWSSSM_EXPORT DescribeMaintenanceWindowTasksRequest : public SsmRequest {

public:
    DescribeMaintenanceWindowTasksRequest(const DescribeMaintenanceWindowTasksRequest &other);
    DescribeMaintenanceWindowTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMaintenanceWindowTasksRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
