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

#ifndef QTAWS_GETFUNCTIONDEFINITIONVERSIONRESPONSE_H
#define QTAWS_GETFUNCTIONDEFINITIONVERSIONRESPONSE_H

#include "greengrassresponse.h"
#include "getfunctiondefinitionversionrequest.h"

namespace AWS {

namespace Greengrass {

class GetFunctionDefinitionVersionResponsePrivate;

class QTAWS_EXPORT GetFunctionDefinitionVersionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetFunctionDefinitionVersionResponse(const GetFunctionDefinitionVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFunctionDefinitionVersionRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetFunctionDefinitionVersionResponse)
    Q_DISABLE_COPY(GetFunctionDefinitionVersionResponse)

};

} // namespace Greengrass
} // namespace AWS

#endif
