/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTINSTANCEFLEETSRESPONSE_H
#define QTAWS_LISTINSTANCEFLEETSRESPONSE_H

#include "emrresponse.h"
#include "listinstancefleetsrequest.h"

namespace QtAws {
namespace EMR {

class ListInstanceFleetsResponsePrivate;

class QTAWS_EXPORT ListInstanceFleetsResponse : public EMRResponse {
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
} // namespace QtAws

#endif
