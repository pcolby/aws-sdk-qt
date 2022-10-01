// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEMAILMONITORINGCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBEEMAILMONITORINGCONFIGURATIONREQUEST_H

#include "workmailrequest.h"

namespace QtAws {
namespace WorkMail {

class DescribeEmailMonitoringConfigurationRequestPrivate;

class QTAWSWORKMAIL_EXPORT DescribeEmailMonitoringConfigurationRequest : public WorkMailRequest {

public:
    DescribeEmailMonitoringConfigurationRequest(const DescribeEmailMonitoringConfigurationRequest &other);
    DescribeEmailMonitoringConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEmailMonitoringConfigurationRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
