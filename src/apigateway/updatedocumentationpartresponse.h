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

#ifndef QTAWS_UPDATEDOCUMENTATIONPARTRESPONSE_H
#define QTAWS_UPDATEDOCUMENTATIONPARTRESPONSE_H

#include "apigatewayresponse.h"
#include "updatedocumentationpartrequest.h"

namespace QtAws {
namespace APIGateway {

class UpdateDocumentationPartResponsePrivate;

class QTAWS_EXPORT UpdateDocumentationPartResponse : public APIGatewayResponse {
    Q_OBJECT

public:
    UpdateDocumentationPartResponse(const UpdateDocumentationPartRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDocumentationPartRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UpdateDocumentationPartResponse)
    Q_DISABLE_COPY(UpdateDocumentationPartResponse)

};

} // namespace APIGateway
} // namespace QtAws

#endif
