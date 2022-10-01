// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMIGRATIONRESPONSE_P_H
#define QTAWS_GETMIGRATIONRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetMigrationResponse;

class GetMigrationResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetMigrationResponsePrivate(GetMigrationResponse * const q);

    void parseGetMigrationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMigrationResponse)
    Q_DISABLE_COPY(GetMigrationResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
