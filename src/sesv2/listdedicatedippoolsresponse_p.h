// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEDICATEDIPPOOLSRESPONSE_P_H
#define QTAWS_LISTDEDICATEDIPPOOLSRESPONSE_P_H

#include "sesv2response_p.h"

namespace QtAws {
namespace SESv2 {

class ListDedicatedIpPoolsResponse;

class ListDedicatedIpPoolsResponsePrivate : public SESv2ResponsePrivate {

public:

    explicit ListDedicatedIpPoolsResponsePrivate(ListDedicatedIpPoolsResponse * const q);

    void parseListDedicatedIpPoolsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDedicatedIpPoolsResponse)
    Q_DISABLE_COPY(ListDedicatedIpPoolsResponsePrivate)

};

} // namespace SESv2
} // namespace QtAws

#endif
