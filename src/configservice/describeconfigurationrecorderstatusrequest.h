// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGURATIONRECORDERSTATUSREQUEST_H
#define QTAWS_DESCRIBECONFIGURATIONRECORDERSTATUSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigurationRecorderStatusRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeConfigurationRecorderStatusRequest : public ConfigServiceRequest {

public:
    DescribeConfigurationRecorderStatusRequest(const DescribeConfigurationRecorderStatusRequest &other);
    DescribeConfigurationRecorderStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigurationRecorderStatusRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
