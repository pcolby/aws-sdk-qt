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

#ifndef QTAWS_DELETEUSAGEPLANRESPONSE_H
#define QTAWS_DELETEUSAGEPLANRESPONSE_H

#include "apigatewayresponse.h"
#include "deleteusageplanrequest.h"

namespace AWS {

namespace apigateway {

class DeleteUsagePlanResponsePrivate;

class QTAWS_EXPORT DeleteUsagePlanResponse : public DeleteUsagePlanResponse {
    Q_OBJECT

public:
    DeleteUsagePlanResponse(const DeleteUsagePlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUsagePlanRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteUsagePlanResponse)
    Q_DISABLE_COPY(DeleteUsagePlanResponse)

};

} // namespace apigateway
} // namespace AWS

#endif
