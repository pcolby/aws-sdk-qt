// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTAUDITCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBEACCOUNTAUDITCONFIGURATIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class DescribeAccountAuditConfigurationRequestPrivate;

class QTAWSIOT_EXPORT DescribeAccountAuditConfigurationRequest : public IoTRequest {

public:
    DescribeAccountAuditConfigurationRequest(const DescribeAccountAuditConfigurationRequest &other);
    DescribeAccountAuditConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAccountAuditConfigurationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
