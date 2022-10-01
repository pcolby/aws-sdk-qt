// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCLUSTERJOBSRESPONSE_P_H
#define QTAWS_LISTCLUSTERJOBSRESPONSE_P_H

#include "snowballresponse_p.h"

namespace QtAws {
namespace Snowball {

class ListClusterJobsResponse;

class ListClusterJobsResponsePrivate : public SnowballResponsePrivate {

public:

    explicit ListClusterJobsResponsePrivate(ListClusterJobsResponse * const q);

    void parseListClusterJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListClusterJobsResponse)
    Q_DISABLE_COPY(ListClusterJobsResponsePrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif
