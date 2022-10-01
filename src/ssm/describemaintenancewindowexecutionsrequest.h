// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONSREQUEST_H
#define QTAWS_DESCRIBEMAINTENANCEWINDOWEXECUTIONSREQUEST_H

#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeMaintenanceWindowExecutionsRequestPrivate;

class QTAWSSSM_EXPORT DescribeMaintenanceWindowExecutionsRequest : public SsmRequest {

public:
    DescribeMaintenanceWindowExecutionsRequest(const DescribeMaintenanceWindowExecutionsRequest &other);
    DescribeMaintenanceWindowExecutionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMaintenanceWindowExecutionsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
