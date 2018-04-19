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

#ifndef QTAWS_GETFUNCTIONDEFINITIONRESPONSE_H
#define QTAWS_GETFUNCTIONDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "getfunctiondefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetFunctionDefinitionResponsePrivate;

class QTAWS_EXPORT GetFunctionDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetFunctionDefinitionResponse(const GetFunctionDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFunctionDefinitionRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(GetFunctionDefinitionResponse)
    Q_DISABLE_COPY(GetFunctionDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
