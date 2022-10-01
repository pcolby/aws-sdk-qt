// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEMAILMONITORINGCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBEEMAILMONITORINGCONFIGURATIONRESPONSE_H

#include "workmailresponse.h"
#include "describeemailmonitoringconfigurationrequest.h"

namespace QtAws {
namespace WorkMail {

class DescribeEmailMonitoringConfigurationResponsePrivate;

class QTAWSWORKMAIL_EXPORT DescribeEmailMonitoringConfigurationResponse : public WorkMailResponse {
    Q_OBJECT

public:
    DescribeEmailMonitoringConfigurationResponse(const DescribeEmailMonitoringConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEmailMonitoringConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEmailMonitoringConfigurationResponse)
    Q_DISABLE_COPY(DescribeEmailMonitoringConfigurationResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
