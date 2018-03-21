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

#ifndef QTAWS_DELETEPARAMETERSRESPONSE_H
#define QTAWS_DELETEPARAMETERSRESPONSE_H

#include "ssmresponse.h"
#include "deleteparametersrequest.h"

namespace AWS {

namespace SSM {

class DeleteParametersResponsePrivate;

class QTAWS_EXPORT DeleteParametersResponse : public DeleteParametersResponse {
    Q_OBJECT

public:
    DeleteParametersResponse(const DeleteParametersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteParametersRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(DeleteParametersResponse)
    Q_DISABLE_COPY(DeleteParametersResponse)

};

} // namespace SSM
} // namespace AWS

#endif
