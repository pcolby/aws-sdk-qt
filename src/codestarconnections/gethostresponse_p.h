// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETHOSTRESPONSE_P_H
#define QTAWS_GETHOSTRESPONSE_P_H

#include "codestarconnectionsresponse_p.h"

namespace QtAws {
namespace CodeStarconnections {

class GetHostResponse;

class GetHostResponsePrivate : public CodeStarconnectionsResponsePrivate {

public:

    explicit GetHostResponsePrivate(GetHostResponse * const q);

    void parseGetHostResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetHostResponse)
    Q_DISABLE_COPY(GetHostResponsePrivate)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
