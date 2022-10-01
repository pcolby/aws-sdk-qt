// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMONITOREDRESOURCESRESPONSE_H
#define QTAWS_LISTMONITOREDRESOURCESRESPONSE_H

#include "devopsgururesponse.h"
#include "listmonitoredresourcesrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class ListMonitoredResourcesResponsePrivate;

class QTAWSDEVOPSGURU_EXPORT ListMonitoredResourcesResponse : public DevOpsGuruResponse {
    Q_OBJECT

public:
    ListMonitoredResourcesResponse(const ListMonitoredResourcesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMonitoredResourcesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMonitoredResourcesResponse)
    Q_DISABLE_COPY(ListMonitoredResourcesResponse)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
