/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETINVENTORYSCHEMARESPONSE_H
#define QTAWS_GETINVENTORYSCHEMARESPONSE_H

#include "ssmresponse.h"
#include "getinventoryschemarequest.h"

namespace AWS {

namespace SSM {

class GetInventorySchemaResponsePrivate;

class QTAWS_EXPORT GetInventorySchemaResponse : public SSMResponse {
    Q_OBJECT

public:
    GetInventorySchemaResponse(const GetInventorySchemaRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInventorySchemaRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetInventorySchemaResponse)
    Q_DISABLE_COPY(GetInventorySchemaResponse)

};

} // namespace SSM
} // namespace AWS

#endif
