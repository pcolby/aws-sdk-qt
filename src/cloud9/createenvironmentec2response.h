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

#ifndef QTAWS_CREATEENVIRONMENTEC2RESPONSE_H
#define QTAWS_CREATEENVIRONMENTEC2RESPONSE_H

#include "cloud9response.h"
#include "createenvironmentec2request.h"

namespace AWS {

namespace Cloud9 {

class CreateEnvironmentEC2ResponsePrivate;

class QTAWS_EXPORT CreateEnvironmentEC2Response : public Cloud9Response {
    Q_OBJECT

public:
    CreateEnvironmentEC2Response(const CreateEnvironmentEC2Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEnvironmentEC2Request * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(CreateEnvironmentEC2Response)
    Q_DISABLE_COPY(CreateEnvironmentEC2Response)

};

} // namespace Cloud9
} // namespace AWS

#endif
