// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOSTRESPONSE_P_H
#define QTAWS_DELETEHOSTRESPONSE_P_H

#include "codestarconnectionsresponse_p.h"

namespace QtAws {
namespace CodeStarconnections {

class DeleteHostResponse;

class DeleteHostResponsePrivate : public CodeStarconnectionsResponsePrivate {

public:

    explicit DeleteHostResponsePrivate(DeleteHostResponse * const q);

    void parseDeleteHostResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteHostResponse)
    Q_DISABLE_COPY(DeleteHostResponsePrivate)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
