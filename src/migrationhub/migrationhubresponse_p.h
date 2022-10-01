// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBRESPONSE_P_H
#define QTAWS_MIGRATIONHUBRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace MigrationHub {

class MigrationHubResponse;

class MigrationHubResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MigrationHubResponsePrivate(MigrationHubResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MigrationHubResponse)
    Q_DISABLE_COPY(MigrationHubResponsePrivate)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
