// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHOSTRESPONSE_P_H
#define QTAWS_UPDATEHOSTRESPONSE_P_H

#include "codestarconnectionsresponse_p.h"

namespace QtAws {
namespace CodeStarconnections {

class UpdateHostResponse;

class UpdateHostResponsePrivate : public CodeStarconnectionsResponsePrivate {

public:

    explicit UpdateHostResponsePrivate(UpdateHostResponse * const q);

    void parseUpdateHostResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateHostResponse)
    Q_DISABLE_COPY(UpdateHostResponsePrivate)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
