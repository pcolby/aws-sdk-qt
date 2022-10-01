// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTIONSRESPONSE_H
#define QTAWS_LISTCONNECTIONSRESPONSE_H

#include "codestarconnectionsresponse.h"
#include "listconnectionsrequest.h"

namespace QtAws {
namespace CodeStarconnections {

class ListConnectionsResponsePrivate;

class QTAWSCODESTARCONNECTIONS_EXPORT ListConnectionsResponse : public CodeStarconnectionsResponse {
    Q_OBJECT

public:
    ListConnectionsResponse(const ListConnectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListConnectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConnectionsResponse)
    Q_DISABLE_COPY(ListConnectionsResponse)

};

} // namespace CodeStarconnections
} // namespace QtAws

#endif
