// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEDICATEDIPPOOLSRESPONSE_P_H
#define QTAWS_LISTDEDICATEDIPPOOLSRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class ListDedicatedIpPoolsResponse;

class ListDedicatedIpPoolsResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit ListDedicatedIpPoolsResponsePrivate(ListDedicatedIpPoolsResponse * const q);

    void parseListDedicatedIpPoolsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDedicatedIpPoolsResponse)
    Q_DISABLE_COPY(ListDedicatedIpPoolsResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
