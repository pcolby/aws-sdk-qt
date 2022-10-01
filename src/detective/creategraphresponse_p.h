// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGRAPHRESPONSE_P_H
#define QTAWS_CREATEGRAPHRESPONSE_P_H

#include "detectiveresponse_p.h"

namespace QtAws {
namespace Detective {

class CreateGraphResponse;

class CreateGraphResponsePrivate : public DetectiveResponsePrivate {

public:

    explicit CreateGraphResponsePrivate(CreateGraphResponse * const q);

    void parseCreateGraphResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGraphResponse)
    Q_DISABLE_COPY(CreateGraphResponsePrivate)

};

} // namespace Detective
} // namespace QtAws

#endif
