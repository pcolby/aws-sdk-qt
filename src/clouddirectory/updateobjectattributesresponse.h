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

#ifndef QTAWS_UPDATEOBJECTATTRIBUTESRESPONSE_H
#define QTAWS_UPDATEOBJECTATTRIBUTESRESPONSE_H

#include "clouddirectoryresponse.h"
#include "updateobjectattributesrequest.h"

namespace AWS {

namespace CloudDirectory {

class UpdateObjectAttributesResponsePrivate;

class QTAWS_EXPORT UpdateObjectAttributesResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    UpdateObjectAttributesResponse(const UpdateObjectAttributesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateObjectAttributesRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UpdateObjectAttributesResponse)
    Q_DISABLE_COPY(UpdateObjectAttributesResponse)

};

} // namespace CloudDirectory
} // namespace AWS

#endif
