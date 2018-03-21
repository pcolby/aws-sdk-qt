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

#ifndef QTAWS_DELETEDEPLOYMENTRESPONSE_H
#define QTAWS_DELETEDEPLOYMENTRESPONSE_H

#include "apigatewayresponse.h"
#include "deletedeploymentrequest.h"

namespace AWS {

namespace apigateway {

class DeleteDeploymentResponsePrivate;

class QTAWS_EXPORT DeleteDeploymentResponse : public DeleteDeploymentResponse {
    Q_OBJECT

public:
    DeleteDeploymentResponse(const DeleteDeploymentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDeploymentRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteDeploymentResponse)
    Q_DISABLE_COPY(DeleteDeploymentResponse)

};

} // namespace apigateway
} // namespace AWS

#endif
