// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREMEDIATIONEXECUTIONSTATUSREQUEST_H
#define QTAWS_DESCRIBEREMEDIATIONEXECUTIONSTATUSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeRemediationExecutionStatusRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeRemediationExecutionStatusRequest : public ConfigServiceRequest {

public:
    DescribeRemediationExecutionStatusRequest(const DescribeRemediationExecutionStatusRequest &other);
    DescribeRemediationExecutionStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRemediationExecutionStatusRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
