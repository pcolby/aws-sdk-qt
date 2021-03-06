/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTGRAPHQLAPISRESPONSE_H
#define QTAWS_LISTGRAPHQLAPISRESPONSE_H

#include "appsyncresponse.h"
#include "listgraphqlapisrequest.h"

namespace QtAws {
namespace AppSync {

class ListGraphqlApisResponsePrivate;

class QTAWSAPPSYNC_EXPORT ListGraphqlApisResponse : public AppSyncResponse {
    Q_OBJECT

public:
    ListGraphqlApisResponse(const ListGraphqlApisRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGraphqlApisRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGraphqlApisResponse)
    Q_DISABLE_COPY(ListGraphqlApisResponse)

};

} // namespace AppSync
} // namespace QtAws

#endif
