// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBEORGANIZATIONCONFIGURATIONRESPONSE_H

#include "guarddutyresponse.h"
#include "describeorganizationconfigurationrequest.h"

namespace QtAws {
namespace GuardDuty {

class DescribeOrganizationConfigurationResponsePrivate;

class QTAWSGUARDDUTY_EXPORT DescribeOrganizationConfigurationResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    DescribeOrganizationConfigurationResponse(const DescribeOrganizationConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeOrganizationConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeOrganizationConfigurationResponse)
    Q_DISABLE_COPY(DescribeOrganizationConfigurationResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
