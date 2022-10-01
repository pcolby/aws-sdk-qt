// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWTARGETSREQUEST_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWTARGETSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowTargetsRequestPrivate;

class QTAWSSSM_EXPORT DescribeMaintenanceWindowTargetsRequest : public SsmRequest {

public:
    DescribeMaintenanceWindowTargetsRequest(const DescribeMaintenanceWindowTargetsRequest &other);
    DescribeMaintenanceWindowTargetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMaintenanceWindowTargetsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
