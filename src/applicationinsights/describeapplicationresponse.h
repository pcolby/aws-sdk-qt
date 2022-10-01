// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONRESPONSE_H
#define QTAWS_DESCRIBEAPPLICATIONRESPONSE_H

#include "applicationinsightsresponse.h"
#include "describeapplicationrequest.h"

namespace QtAws {
namespace ApplicationInsights {

class DescribeApplicationResponsePrivate;

class QTAWSAPPLICATIONINSIGHTS_EXPORT DescribeApplicationResponse : public ApplicationInsightsResponse {
    Q_OBJECT

public:
    DescribeApplicationResponse(const DescribeApplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeApplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeApplicationResponse)
    Q_DISABLE_COPY(DescribeApplicationResponse)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
