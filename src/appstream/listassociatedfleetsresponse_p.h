// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSOCIATEDFLEETSRESPONSE_P_H
#define QTAWS_LISTASSOCIATEDFLEETSRESPONSE_P_H

#include "appstreamresponse_p.h"

namespace QtAws {
namespace AppStream {

class ListAssociatedFleetsResponse;

class ListAssociatedFleetsResponsePrivate : public AppStreamResponsePrivate {

public:

    explicit ListAssociatedFleetsResponsePrivate(ListAssociatedFleetsResponse * const q);

    void parseListAssociatedFleetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAssociatedFleetsResponse)
    Q_DISABLE_COPY(ListAssociatedFleetsResponsePrivate)

};

} // namespace AppStream
} // namespace QtAws

#endif
