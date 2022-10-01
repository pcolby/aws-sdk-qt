// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKINSIGHTSACCESSSCOPEANALYSISRESPONSE_H
#define QTAWS_DELETENETWORKINSIGHTSACCESSSCOPEANALYSISRESPONSE_H

#include "ec2response.h"
#include "deletenetworkinsightsaccessscopeanalysisrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkInsightsAccessScopeAnalysisResponsePrivate;

class QTAWSEC2_EXPORT DeleteNetworkInsightsAccessScopeAnalysisResponse : public Ec2Response {
    Q_OBJECT

public:
    DeleteNetworkInsightsAccessScopeAnalysisResponse(const DeleteNetworkInsightsAccessScopeAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNetworkInsightsAccessScopeAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkInsightsAccessScopeAnalysisResponse)
    Q_DISABLE_COPY(DeleteNetworkInsightsAccessScopeAnalysisResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
