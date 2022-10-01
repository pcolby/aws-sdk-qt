// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXECUTIONREQUEST_H
#define QTAWS_DESCRIBEEXECUTIONREQUEST_H

#include "snowdevicemanagementrequest.h"

namespace QtAws {
namespace SnowDeviceManagement {

class DescribeExecutionRequestPrivate;

class QTAWSSNOWDEVICEMANAGEMENT_EXPORT DescribeExecutionRequest : public SnowDeviceManagementRequest {

public:
    DescribeExecutionRequest(const DescribeExecutionRequest &other);
    DescribeExecutionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExecutionRequest)

};

} // namespace SnowDeviceManagement
} // namespace QtAws

#endif
