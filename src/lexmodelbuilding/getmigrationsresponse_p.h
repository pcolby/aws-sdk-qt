// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMIGRATIONSRESPONSE_P_H
#define QTAWS_GETMIGRATIONSRESPONSE_P_H

#include "lexmodelbuildingresponse_p.h"

namespace QtAws {
namespace LexModelBuilding {

class GetMigrationsResponse;

class GetMigrationsResponsePrivate : public LexModelBuildingResponsePrivate {

public:

    explicit GetMigrationsResponsePrivate(GetMigrationsResponse * const q);

    void parseGetMigrationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMigrationsResponse)
    Q_DISABLE_COPY(GetMigrationsResponsePrivate)

};

} // namespace LexModelBuilding
} // namespace QtAws

#endif
