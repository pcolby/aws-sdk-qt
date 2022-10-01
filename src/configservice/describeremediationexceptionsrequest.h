// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREMEDIATIONEXCEPTIONSREQUEST_H
#define QTAWS_DESCRIBEREMEDIATIONEXCEPTIONSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeRemediationExceptionsRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeRemediationExceptionsRequest : public ConfigServiceRequest {

public:
    DescribeRemediationExceptionsRequest(const DescribeRemediationExceptionsRequest &other);
    DescribeRemediationExceptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRemediationExceptionsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
