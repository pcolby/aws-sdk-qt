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

#ifndef QTAWS_ENABLESSORESPONSE_H
#define QTAWS_ENABLESSORESPONSE_H

#include "directoryserviceresponse.h"
#include "enablessorequest.h"

namespace AWS {

namespace DirectoryService {

class EnableSsoResponsePrivate;

class QTAWS_EXPORT EnableSsoResponse : public EnableSsoResponse {
    Q_OBJECT

public:
    EnableSsoResponse(const EnableSsoRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableSsoRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(EnableSsoResponse)
    Q_DISABLE_COPY(EnableSsoResponse)

};

} // namespace DirectoryService
} // namespace AWS

#endif
