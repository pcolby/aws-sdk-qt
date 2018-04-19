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

#ifndef QTAWS_CREATEDEVICEDEFINITIONRESPONSE_H
#define QTAWS_CREATEDEVICEDEFINITIONRESPONSE_H

#include "greengrassresponse.h"
#include "createdevicedefinitionrequest.h"

namespace QtAws {
namespace Greengrass {

class CreateDeviceDefinitionResponsePrivate;

class QTAWS_EXPORT CreateDeviceDefinitionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    CreateDeviceDefinitionResponse(const CreateDeviceDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDeviceDefinitionRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(CreateDeviceDefinitionResponse)
    Q_DISABLE_COPY(CreateDeviceDefinitionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
