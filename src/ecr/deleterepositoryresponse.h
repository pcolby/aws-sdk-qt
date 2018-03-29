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

#ifndef QTAWS_DELETEREPOSITORYRESPONSE_H
#define QTAWS_DELETEREPOSITORYRESPONSE_H

#include "ecrresponse.h"
#include "deleterepositoryrequest.h"

namespace QtAws {
namespace ECR {

class DeleteRepositoryResponsePrivate;

class QTAWS_EXPORT DeleteRepositoryResponse : public ECRResponse {
    Q_OBJECT

public:
    DeleteRepositoryResponse(const DeleteRepositoryRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRepositoryRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteRepositoryResponse)
    Q_DISABLE_COPY(DeleteRepositoryResponse)

};

} // namespace ECR
} // namespace QtAws

#endif
