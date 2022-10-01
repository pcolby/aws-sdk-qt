// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTORENTITIESRESPONSE_H
#define QTAWS_LISTCONNECTORENTITIESRESPONSE_H

#include "appflowresponse.h"
#include "listconnectorentitiesrequest.h"

namespace QtAws {
namespace Appflow {

class ListConnectorEntitiesResponsePrivate;

class QTAWSAPPFLOW_EXPORT ListConnectorEntitiesResponse : public AppflowResponse {
    Q_OBJECT

public:
    ListConnectorEntitiesResponse(const ListConnectorEntitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListConnectorEntitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConnectorEntitiesResponse)
    Q_DISABLE_COPY(ListConnectorEntitiesResponse)

};

} // namespace Appflow
} // namespace QtAws

#endif
