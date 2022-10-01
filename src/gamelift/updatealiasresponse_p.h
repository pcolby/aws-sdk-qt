// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEALIASRESPONSE_P_H
#define QTAWS_UPDATEALIASRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class UpdateAliasResponse;

class UpdateAliasResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit UpdateAliasResponsePrivate(UpdateAliasResponse * const q);

    void parseUpdateAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAliasResponse)
    Q_DISABLE_COPY(UpdateAliasResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
