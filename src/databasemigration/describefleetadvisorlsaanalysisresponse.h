// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETADVISORLSAANALYSISRESPONSE_H
#define QTAWS_DESCRIBEFLEETADVISORLSAANALYSISRESPONSE_H

#include "databasemigrationresponse.h"
#include "describefleetadvisorlsaanalysisrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeFleetAdvisorLsaAnalysisResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeFleetAdvisorLsaAnalysisResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DescribeFleetAdvisorLsaAnalysisResponse(const DescribeFleetAdvisorLsaAnalysisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeFleetAdvisorLsaAnalysisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetAdvisorLsaAnalysisResponse)
    Q_DISABLE_COPY(DescribeFleetAdvisorLsaAnalysisResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
