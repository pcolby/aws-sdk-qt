// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEOUTPOSTRESPONSE_P_H
#define QTAWS_UPDATEOUTPOSTRESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class UpdateOutpostResponse;

class UpdateOutpostResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit UpdateOutpostResponsePrivate(UpdateOutpostResponse * const q);

    void parseUpdateOutpostResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateOutpostResponse)
    Q_DISABLE_COPY(UpdateOutpostResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
