// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSESSMENTREQUEST_H
#define QTAWS_GETASSESSMENTREQUEST_H

#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetAssessmentRequestPrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT GetAssessmentRequest : public MigrationHubStrategyRequest {

public:
    GetAssessmentRequest(const GetAssessmentRequest &other);
    GetAssessmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssessmentRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
