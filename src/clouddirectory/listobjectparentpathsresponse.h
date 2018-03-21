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

#ifndef QTAWS_LISTOBJECTPARENTPATHSRESPONSE_H
#define QTAWS_LISTOBJECTPARENTPATHSRESPONSE_H

#include "clouddirectoryresponse.h"
#include "listobjectparentpathsrequest.h"

namespace AWS {

namespace CloudDirectory {

class ListObjectParentPathsResponsePrivate;

class QTAWS_EXPORT ListObjectParentPathsResponse : public ListObjectParentPathsResponse {
    Q_OBJECT

public:
    ListObjectParentPathsResponse(const ListObjectParentPathsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListObjectParentPathsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ListObjectParentPathsResponse)
    Q_DISABLE_COPY(ListObjectParentPathsResponse)

};

} // namespace CloudDirectory
} // namespace AWS

#endif
