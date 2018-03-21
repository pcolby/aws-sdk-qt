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

#ifndef QTAWS_UPDATERADIUSRESPONSE_H
#define QTAWS_UPDATERADIUSRESPONSE_H

#include "dsresponse.h"
#include "updateradiusrequest.h"

namespace AWS {

namespace ds {

class UpdateRadiusResponsePrivate;

class QTAWS_EXPORT UpdateRadiusResponse : public UpdateRadiusResponse {
    Q_OBJECT

public:
    UpdateRadiusResponse(const UpdateRadiusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRadiusRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UpdateRadiusResponse)
    Q_DISABLE_COPY(UpdateRadiusResponse)

};

} // namespace ds
} // namespace AWS

#endif
