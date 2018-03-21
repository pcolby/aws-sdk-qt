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

#ifndef QTAWS_DELETEENDPOINTCONFIGRESPONSE_H
#define QTAWS_DELETEENDPOINTCONFIGRESPONSE_H

#include "sagemakerresponse.h"
#include "deleteendpointconfigrequest.h"

namespace AWS {

namespace sagemaker {

class DeleteEndpointConfigResponsePrivate;

class QTAWS_EXPORT DeleteEndpointConfigResponse : public DeleteEndpointConfigResponse {
    Q_OBJECT

public:
    DeleteEndpointConfigResponse(const DeleteEndpointConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEndpointConfigRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteEndpointConfigResponse)
    Q_DISABLE_COPY(DeleteEndpointConfigResponse)

};

} // namespace sagemaker
} // namespace AWS

#endif
