// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGRAPHRESPONSE_P_H
#define QTAWS_DELETEGRAPHRESPONSE_P_H

#include "detectiveresponse_p.h"

namespace QtAws {
namespace Detective {

class DeleteGraphResponse;

class DeleteGraphResponsePrivate : public DetectiveResponsePrivate {

public:

    explicit DeleteGraphResponsePrivate(DeleteGraphResponse * const q);

    void parseDeleteGraphResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGraphResponse)
    Q_DISABLE_COPY(DeleteGraphResponsePrivate)

};

} // namespace Detective
} // namespace QtAws

#endif
