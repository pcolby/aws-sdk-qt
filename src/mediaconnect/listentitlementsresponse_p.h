// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENTITLEMENTSRESPONSE_P_H
#define QTAWS_LISTENTITLEMENTSRESPONSE_P_H

#include "mediaconnectresponse_p.h"

namespace QtAws {
namespace MediaConnect {

class ListEntitlementsResponse;

class ListEntitlementsResponsePrivate : public MediaConnectResponsePrivate {

public:

    explicit ListEntitlementsResponsePrivate(ListEntitlementsResponse * const q);

    void parseListEntitlementsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEntitlementsResponse)
    Q_DISABLE_COPY(ListEntitlementsResponsePrivate)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
