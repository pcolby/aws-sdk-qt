// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVERNEIGHBORSRESPONSE_H
#define QTAWS_LISTSERVERNEIGHBORSRESPONSE_H

#include "applicationdiscoveryresponse.h"
#include "listserverneighborsrequest.h"

namespace QtAws {
namespace ApplicationDiscovery {

class ListServerNeighborsResponsePrivate;

class QTAWSAPPLICATIONDISCOVERY_EXPORT ListServerNeighborsResponse : public ApplicationDiscoveryResponse {
    Q_OBJECT

public:
    ListServerNeighborsResponse(const ListServerNeighborsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListServerNeighborsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListServerNeighborsResponse)
    Q_DISABLE_COPY(ListServerNeighborsResponse)

};

} // namespace ApplicationDiscovery
} // namespace QtAws

#endif
