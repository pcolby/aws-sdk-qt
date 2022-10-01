// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBEORGANIZATIONCONFIGURATIONREQUEST_H

#include "guarddutyrequest.h"

namespace QtAws {
namespace GuardDuty {

class DescribeOrganizationConfigurationRequestPrivate;

class QTAWSGUARDDUTY_EXPORT DescribeOrganizationConfigurationRequest : public GuardDutyRequest {

public:
    DescribeOrganizationConfigurationRequest(const DescribeOrganizationConfigurationRequest &other);
    DescribeOrganizationConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationConfigurationRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
