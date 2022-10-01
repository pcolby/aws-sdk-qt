// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHOSTRESPONSE_P_H
#define QTAWS_CREATEHOSTRESPONSE_P_H

#include "codestarconnectionsresponse_p.h"

namespace QtAws {
namespace CodeStarconnections {

class CreateHostResponse;

class CreateHostResponsePrivate : public CodeStarconnectionsResponsePrivate {

public:

    explicit CreateHostResponsePrivate(CreateHostResponse * const q);

    void parseCreateHostResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateHostResponse)
    Q_DISABLE_COPY(CreateHostResponsePrivate)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
