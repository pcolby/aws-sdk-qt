// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSITESRESPONSE_P_H
#define QTAWS_LISTSITESRESPONSE_P_H

#include "outpostsresponse_p.h"

namespace QtAws {
namespace Outposts {

class ListSitesResponse;

class ListSitesResponsePrivate : public OutpostsResponsePrivate {

public:

    explicit ListSitesResponsePrivate(ListSitesResponse * const q);

    void parseListSitesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSitesResponse)
    Q_DISABLE_COPY(ListSitesResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
