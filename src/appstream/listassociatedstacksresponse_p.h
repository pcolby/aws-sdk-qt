// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDSTACKSRESPONSE_P_H
#define QTAWS_LISTASSOCIATEDSTACKSRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class ListAssociatedStacksResponse;

class ListAssociatedStacksResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit ListAssociatedStacksResponsePrivate(ListAssociatedStacksResponse * const q);

    void parseListAssociatedStacksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssociatedStacksResponse)
    Q_DISABLE_COPY(ListAssociatedStacksResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
