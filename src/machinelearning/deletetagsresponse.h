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

#ifndef QTAWS_DELETETAGSRESPONSE_H
#define QTAWS_DELETETAGSRESPONSE_H

#include "machinelearningresponse.h"
#include "deletetagsrequest.h"

namespace AWS {

namespace MachineLearning {

class DeleteTagsResponsePrivate;

class QTAWS_EXPORT DeleteTagsResponse : public DeleteTagsResponse {
    Q_OBJECT

public:
    DeleteTagsResponse(const DeleteTagsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTagsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteTagsResponse)
    Q_DISABLE_COPY(DeleteTagsResponse)

};

} // namespace MachineLearning
} // namespace AWS

#endif
