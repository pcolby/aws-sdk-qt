// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBCONFIGRESPONSE_P_H
#define QTAWS_MIGRATIONHUBCONFIGRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace MigrationHubConfig {

class MigrationHubConfigResponse;

class MigrationHubConfigResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MigrationHubConfigResponsePrivate(MigrationHubConfigResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MigrationHubConfigResponse)
    Q_DISABLE_COPY(MigrationHubConfigResponsePrivate)

};

} // namespace MigrationHubConfig
} // namespace QtAws

#endif
