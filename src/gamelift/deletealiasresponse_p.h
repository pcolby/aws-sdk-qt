// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALIASRESPONSE_P_H
#define QTAWS_DELETEALIASRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class DeleteAliasResponse;

class DeleteAliasResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit DeleteAliasResponsePrivate(DeleteAliasResponse * const q);

    void parseDeleteAliasResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAliasResponse)
    Q_DISABLE_COPY(DeleteAliasResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
