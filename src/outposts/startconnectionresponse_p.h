// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONNECTIONRESPONSE_P_H
#define QTAWS_STARTCONNECTIONRESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class StartConnectionResponse;

class StartConnectionResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit StartConnectionResponsePrivate(StartConnectionResponse * const q);

    void parseStartConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartConnectionResponse)
    Q_DISABLE_COPY(StartConnectionResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
