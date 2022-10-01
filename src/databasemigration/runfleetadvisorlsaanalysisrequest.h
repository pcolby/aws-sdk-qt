// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RUNFLEETADVISORLSAANALYSISREQUEST_H
#define QTAWS_RUNFLEETADVISORLSAANALYSISREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class RunFleetAdvisorLsaAnalysisRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT RunFleetAdvisorLsaAnalysisRequest : public DatabaseMigrationRequest {

public:
    RunFleetAdvisorLsaAnalysisRequest(const RunFleetAdvisorLsaAnalysisRequest &other);
    RunFleetAdvisorLsaAnalysisRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RunFleetAdvisorLsaAnalysisRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
