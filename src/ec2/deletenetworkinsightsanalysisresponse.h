// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINSIGHTSANALYSISRESPONSE_H
#define QTAWS_DELETENETWORKINSIGHTSANALYSISRESPONSE_H

#include "ec2response.h"
#include "deletenetworkinsightsanalysisrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInsightsAnalysisResponsePrivate;

class QTAWSEC2_EXPORT DeleteNetworkInsightsAnalysisResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteNetworkInsightsAnalysisResponse(const DeleteNetworkInsightsAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNetworkInsightsAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkInsightsAnalysisResponse)
    Q_DISABLE_COPY(DeleteNetworkInsightsAnalysisResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
