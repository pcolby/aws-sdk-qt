// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVEALIASRESPONSE_P_H
#define QTAWS_RESOLVEALIASRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class ResolveAliasResponse;

class ResolveAliasResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit ResolveAliasResponsePrivate(ResolveAliasResponse * const q);

    void parseResolveAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResolveAliasResponse)
    Q_DISABLE_COPY(ResolveAliasResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
