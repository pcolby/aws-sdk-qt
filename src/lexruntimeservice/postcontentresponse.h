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

#ifndef QTAWS_POSTCONTENTRESPONSE_H
#define QTAWS_POSTCONTENTRESPONSE_H

#include "lexruntimeserviceresponse.h"
#include "postcontentrequest.h"

namespace QtAws {
namespace LexRuntimeService {

class PostContentResponsePrivate;

class QTAWS_EXPORT PostContentResponse : public LexRuntimeServiceResponse {
    Q_OBJECT

public:
    PostContentResponse(const PostContentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PostContentRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(PostContentResponse)
    Q_DISABLE_COPY(PostContentResponse)

};

} // namespace LexRuntimeService
} // namespace QtAws

#endif
