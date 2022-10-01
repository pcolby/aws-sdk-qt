// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBEORGANIZATIONCONFIGURATIONRESPONSE_H

#include "securityhubresponse.h"
#include "describeorganizationconfigurationrequest.h"

namespace QtAws {
namespace SecurityHub {

class DescribeOrganizationConfigurationResponsePrivate;

class QTAWSSECURITYHUB_EXPORT DescribeOrganizationConfigurationResponse : public SecurityHubResponse {
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

} // namespace SecurityHub
} // namespace QtAws

#endif
