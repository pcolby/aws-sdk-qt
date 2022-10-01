// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPONENTCONFIGURATIONRESPONSE_H
#define QTAWS_DESCRIBECOMPONENTCONFIGURATIONRESPONSE_H

#include "applicationinsightsresponse.h"
#include "describecomponentconfigurationrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeComponentConfigurationResponsePrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT DescribeComponentConfigurationResponse : public ApplicationInsightsResponse {
    Q_OBJECT

public:
    DescribeComponentConfigurationResponse(const DescribeComponentConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeComponentConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeComponentConfigurationResponse)
    Q_DISABLE_COPY(DescribeComponentConfigurationResponse)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
