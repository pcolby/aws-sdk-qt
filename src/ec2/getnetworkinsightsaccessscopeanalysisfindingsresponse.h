// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKINSIGHTSACCESSSCOPEANALYSISFINDINGSRESPONSE_H
#define QTAWS_GETNETWORKINSIGHTSACCESSSCOPEANALYSISFINDINGSRESPONSE_H

#include "ec2response.h"
#include "getnetworkinsightsaccessscopeanalysisfindingsrequest.h"

namespace QtAws {
namespace Ec2 {

class GetNetworkInsightsAccessScopeAnalysisFindingsResponsePrivate;

class QTAWSEC2_EXPORT GetNetworkInsightsAccessScopeAnalysisFindingsResponse : public Ec2Response {
    Q_OBJECT

public:
    GetNetworkInsightsAccessScopeAnalysisFindingsResponse(const GetNetworkInsightsAccessScopeAnalysisFindingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetNetworkInsightsAccessScopeAnalysisFindingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkInsightsAccessScopeAnalysisFindingsResponse)
    Q_DISABLE_COPY(GetNetworkInsightsAccessScopeAnalysisFindingsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
