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

#ifndef QTAWS_GETCOMMENTRESPONSE_H
#define QTAWS_GETCOMMENTRESPONSE_H

#include "codecommitresponse.h"
#include "getcommentrequest.h"

namespace AWS {

namespace CodeCommit {

class GetCommentResponsePrivate;

class QTAWS_EXPORT GetCommentResponse : public GetCommentResponse {
    Q_OBJECT

public:
    GetCommentResponse(const GetCommentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCommentRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetCommentResponse)
    Q_DISABLE_COPY(GetCommentResponse)

};

} // namespace CodeCommit
} // namespace AWS

#endif
