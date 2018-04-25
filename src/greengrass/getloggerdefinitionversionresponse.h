/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETLOGGERDEFINITIONVERSIONRESPONSE_H
#define QTAWS_GETLOGGERDEFINITIONVERSIONRESPONSE_H

#include "greengrassresponse.h"
#include "getloggerdefinitionversionrequest.h"

namespace QtAws {
namespace Greengrass {

class GetLoggerDefinitionVersionResponsePrivate;

class QTAWS_EXPORT GetLoggerDefinitionVersionResponse : public GreengrassResponse {
    Q_OBJECT

public:
    GetLoggerDefinitionVersionResponse(const GetLoggerDefinitionVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetLoggerDefinitionVersionRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(GetLoggerDefinitionVersionResponse)
    Q_DISABLE_COPY(GetLoggerDefinitionVersionResponse)

};

} // namespace Greengrass
} // namespace QtAws

#endif
