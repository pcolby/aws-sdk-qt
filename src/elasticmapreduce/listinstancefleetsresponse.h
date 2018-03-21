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

#ifndef QTAWS_LISTINSTANCEFLEETSRESPONSE_H
#define QTAWS_LISTINSTANCEFLEETSRESPONSE_H

#include "emrresponse.h"
#include "listinstancefleetsrequest.h"

namespace AWS {

namespace EMR {

class ListInstanceFleetsResponsePrivate;

class QTAWS_EXPORT ListInstanceFleetsResponse : public ListInstanceFleetsResponse {
    Q_OBJECT

public:
    ListInstanceFleetsResponse(const ListInstanceFleetsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListInstanceFleetsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ListInstanceFleetsResponse)
    Q_DISABLE_COPY(ListInstanceFleetsResponse)

};

} // namespace EMR
} // namespace AWS

#endif
