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

#ifndef QTAWS_LISTCONTEXTSRESPONSE_H
#define QTAWS_LISTCONTEXTSRESPONSE_H

#include "sagemakerresponse.h"
#include "listcontextsrequest.h"

namespace QtAws {
namespace SageMaker {

class ListContextsResponsePrivate;

class QTAWS_EXPORT ListContextsResponse : public SageMakerResponse {
    Q_OBJECT

public:
    ListContextsResponse(const ListContextsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListContextsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContextsResponse)
    Q_DISABLE_COPY(ListContextsResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
