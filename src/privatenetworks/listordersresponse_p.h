// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORDERSRESPONSE_P_H
#define QTAWS_LISTORDERSRESPONSE_P_H

#include "privatenetworksresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class ListOrdersResponse;

class ListOrdersResponsePrivate : public PrivateNetworksResponsePrivate {

public:

    explicit ListOrdersResponsePrivate(ListOrdersResponse * const q);

    void parseListOrdersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListOrdersResponse)
    Q_DISABLE_COPY(ListOrdersResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
