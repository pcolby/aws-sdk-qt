// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTHOSTSRESPONSE_P_H
#define QTAWS_LISTHOSTSRESPONSE_P_H

#include "codestarconnectionsresponse_p.h"

namespace QtAws {
namespace CodeStarconnections {

class ListHostsResponse;

class ListHostsResponsePrivate : public CodeStarconnectionsResponsePrivate {

public:

    explicit ListHostsResponsePrivate(ListHostsResponse * const q);

    void parseListHostsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListHostsResponse)
    Q_DISABLE_COPY(ListHostsResponsePrivate)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
