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

#ifndef QTAWS_DELETESTAGERESPONSE_H
#define QTAWS_DELETESTAGERESPONSE_H

#include "apigatewayresponse.h"
#include "deletestagerequest.h"

namespace QtAws {
namespace APIGateway {

class DeleteStageResponsePrivate;

class QTAWS_EXPORT DeleteStageResponse : public APIGatewayResponse {
    Q_OBJECT

public:
    DeleteStageResponse(const DeleteStageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteStageRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(DeleteStageResponse)
    Q_DISABLE_COPY(DeleteStageResponse)

};

} // namespace APIGateway
} // namespace QtAws

#endif
