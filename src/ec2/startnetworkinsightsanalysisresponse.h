// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTNETWORKINSIGHTSANALYSISRESPONSE_H
#define QTAWS_STARTNETWORKINSIGHTSANALYSISRESPONSE_H

#include "ec2response.h"
#include "startnetworkinsightsanalysisrequest.h"

namespace QtAws {
namespace Ec2 {

class StartNetworkInsightsAnalysisResponsePrivate;

class QTAWSEC2_EXPORT StartNetworkInsightsAnalysisResponse : public Ec2Response {
    Q_OBJECT

public:
    StartNetworkInsightsAnalysisResponse(const StartNetworkInsightsAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartNetworkInsightsAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartNetworkInsightsAnalysisResponse)
    Q_DISABLE_COPY(StartNetworkInsightsAnalysisResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
