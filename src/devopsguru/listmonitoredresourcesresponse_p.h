// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMONITOREDRESOURCESRESPONSE_P_H
#define QTAWS_LISTMONITOREDRESOURCESRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class ListMonitoredResourcesResponse;

class ListMonitoredResourcesResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit ListMonitoredResourcesResponsePrivate(ListMonitoredResourcesResponse * const q);

    void parseListMonitoredResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMonitoredResourcesResponse)
    Q_DISABLE_COPY(ListMonitoredResourcesResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
