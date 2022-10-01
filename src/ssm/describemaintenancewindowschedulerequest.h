// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWSCHEDULEREQUEST_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWSCHEDULEREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowScheduleRequestPrivate;

class QTAWSSSM_EXPORT DescribeMaintenanceWindowScheduleRequest : public SsmRequest {

public:
    DescribeMaintenanceWindowScheduleRequest(const DescribeMaintenanceWindowScheduleRequest &other);
    DescribeMaintenanceWindowScheduleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMaintenanceWindowScheduleRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
