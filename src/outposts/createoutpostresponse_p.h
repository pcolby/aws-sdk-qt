// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOUTPOSTRESPONSE_P_H
#define QTAWS_CREATEOUTPOSTRESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class CreateOutpostResponse;

class CreateOutpostResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit CreateOutpostResponsePrivate(CreateOutpostResponse * const q);

    void parseCreateOutpostResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateOutpostResponse)
    Q_DISABLE_COPY(CreateOutpostResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
