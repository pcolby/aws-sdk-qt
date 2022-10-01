// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBSTRATEGYRESPONSE_P_H
#define QTAWS_MIGRATIONHUBSTRATEGYRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace MigrationHubStrategy {

class MigrationHubStrategyResponse;

class MigrationHubStrategyResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MigrationHubStrategyResponsePrivate(MigrationHubStrategyResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MigrationHubStrategyResponse)
    Q_DISABLE_COPY(MigrationHubStrategyResponsePrivate)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
