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

#ifndef QTAWS_DELETEDHCPOPTIONSRESPONSE_H
#define QTAWS_DELETEDHCPOPTIONSRESPONSE_H

#include "ec2response.h"
#include "deletedhcpoptionsrequest.h"

namespace AWS {

namespace ec2 {

class DeleteDhcpOptionsResponsePrivate;

class QTAWS_EXPORT DeleteDhcpOptionsResponse : public DeleteDhcpOptionsResponse {
    Q_OBJECT

public:
    DeleteDhcpOptionsResponse(const DeleteDhcpOptionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDhcpOptionsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteDhcpOptionsResponse)
    Q_DISABLE_COPY(DeleteDhcpOptionsResponse)

};

} // namespace ec2
} // namespace AWS

#endif
