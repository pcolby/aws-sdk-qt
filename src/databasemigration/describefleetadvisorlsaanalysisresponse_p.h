// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETADVISORLSAANALYSISRESPONSE_P_H
#define QTAWS_DESCRIBEFLEETADVISORLSAANALYSISRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeFleetAdvisorLsaAnalysisResponse;

class DescribeFleetAdvisorLsaAnalysisResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DescribeFleetAdvisorLsaAnalysisResponsePrivate(DescribeFleetAdvisorLsaAnalysisResponse * const q);

    void parseDescribeFleetAdvisorLsaAnalysisResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFleetAdvisorLsaAnalysisResponse)
    Q_DISABLE_COPY(DescribeFleetAdvisorLsaAnalysisResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
