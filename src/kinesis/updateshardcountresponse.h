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

#ifndef QTAWS_UPDATESHARDCOUNTRESPONSE_H
#define QTAWS_UPDATESHARDCOUNTRESPONSE_H

#include "kinesisresponse.h"
#include "updateshardcountrequest.h"

namespace AWS {

namespace Kinesis {

class UpdateShardCountResponsePrivate;

class QTAWS_EXPORT UpdateShardCountResponse : public UpdateShardCountResponse {
    Q_OBJECT

public:
    UpdateShardCountResponse(const UpdateShardCountRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateShardCountRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UpdateShardCountResponse)
    Q_DISABLE_COPY(UpdateShardCountResponse)

};

} // namespace Kinesis
} // namespace AWS

#endif
