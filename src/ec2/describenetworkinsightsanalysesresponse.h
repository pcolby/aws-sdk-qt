// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINSIGHTSANALYSESRESPONSE_H
#define QTAWS_DESCRIBENETWORKINSIGHTSANALYSESRESPONSE_H

#include "ec2response.h"
#include "describenetworkinsightsanalysesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInsightsAnalysesResponsePrivate;

class QTAWSEC2_EXPORT DescribeNetworkInsightsAnalysesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeNetworkInsightsAnalysesResponse(const DescribeNetworkInsightsAnalysesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNetworkInsightsAnalysesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNetworkInsightsAnalysesResponse)
    Q_DISABLE_COPY(DescribeNetworkInsightsAnalysesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
