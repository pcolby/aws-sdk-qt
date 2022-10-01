// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENETWORKINSIGHTSACCESSSCOPEANALYSESRESPONSE_H
#define QTAWS_DESCRIBENETWORKINSIGHTSACCESSSCOPEANALYSESRESPONSE_H

#include "ec2response.h"
#include "describenetworkinsightsaccessscopeanalysesrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeNetworkInsightsAccessScopeAnalysesResponsePrivate;

class QTAWSEC2_EXPORT DescribeNetworkInsightsAccessScopeAnalysesResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeNetworkInsightsAccessScopeAnalysesResponse(const DescribeNetworkInsightsAccessScopeAnalysesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeNetworkInsightsAccessScopeAnalysesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNetworkInsightsAccessScopeAnalysesResponse)
    Q_DISABLE_COPY(DescribeNetworkInsightsAccessScopeAnalysesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
