// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOUTPOSTRESPONSE_P_H
#define QTAWS_GETOUTPOSTRESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class GetOutpostResponse;

class GetOutpostResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit GetOutpostResponsePrivate(GetOutpostResponse * const q);

    void parseGetOutpostResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetOutpostResponse)
    Q_DISABLE_COPY(GetOutpostResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
