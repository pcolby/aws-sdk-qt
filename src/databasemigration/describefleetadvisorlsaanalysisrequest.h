// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETADVISORLSAANALYSISREQUEST_H
#define QTAWS_DESCRIBEFLEETADVISORLSAANALYSISREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DescribeFleetAdvisorLsaAnalysisRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DescribeFleetAdvisorLsaAnalysisRequest : public DatabaseMigrationRequest {

public:
    DescribeFleetAdvisorLsaAnalysisRequest(const DescribeFleetAdvisorLsaAnalysisRequest &other);
    DescribeFleetAdvisorLsaAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetAdvisorLsaAnalysisRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
