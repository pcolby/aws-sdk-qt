// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOUTPOSTRESPONSE_P_H
#define QTAWS_DELETEOUTPOSTRESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class DeleteOutpostResponse;

class DeleteOutpostResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit DeleteOutpostResponsePrivate(DeleteOutpostResponse * const q);

    void parseDeleteOutpostResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteOutpostResponse)
    Q_DISABLE_COPY(DeleteOutpostResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
