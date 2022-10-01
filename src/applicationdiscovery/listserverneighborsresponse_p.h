// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVERNEIGHBORSRESPONSE_P_H
#define QTAWS_LISTSERVERNEIGHBORSRESPONSE_P_H

#include "applicationdiscoveryresponse_p.h"

namespace QtAws {
namespace ApplicationDiscovery {

class ListServerNeighborsResponse;

class ListServerNeighborsResponsePrivate : public ApplicationDiscoveryResponsePrivate {

public:

    explicit ListServerNeighborsResponsePrivate(ListServerNeighborsResponse * const q);

    void parseListServerNeighborsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServerNeighborsResponse)
    Q_DISABLE_COPY(ListServerNeighborsResponsePrivate)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
