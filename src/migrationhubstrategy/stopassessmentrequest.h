// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPASSESSMENTREQUEST_H
#define QTAWS_STOPASSESSMENTREQUEST_H

#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class StopAssessmentRequestPrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT StopAssessmentRequest : public MigrationHubStrategyRequest {

public:
    StopAssessmentRequest(const StopAssessmentRequest &other);
    StopAssessmentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopAssessmentRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
