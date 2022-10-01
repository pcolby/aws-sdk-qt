// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTOUTPOSTSRESPONSE_P_H
#define QTAWS_LISTOUTPOSTSRESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class ListOutpostsResponse;

class ListOutpostsResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit ListOutpostsResponsePrivate(ListOutpostsResponse * const q);

    void parseListOutpostsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOutpostsResponse)
    Q_DISABLE_COPY(ListOutpostsResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
