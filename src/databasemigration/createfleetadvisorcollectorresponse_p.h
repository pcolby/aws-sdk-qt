// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETADVISORCOLLECTORRESPONSE_P_H
#define QTAWS_CREATEFLEETADVISORCOLLECTORRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class CreateFleetAdvisorCollectorResponse;

class CreateFleetAdvisorCollectorResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit CreateFleetAdvisorCollectorResponsePrivate(CreateFleetAdvisorCollectorResponse * const q);

    void parseCreateFleetAdvisorCollectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFleetAdvisorCollectorResponse)
    Q_DISABLE_COPY(CreateFleetAdvisorCollectorResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
