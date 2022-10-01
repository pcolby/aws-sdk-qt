/*
    Copyright 2013-2021 Paul Colby

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

#ifndef QTAWS_GETAPPLICATIONCOMPONENTSTRATEGIESRESPONSE_H
#define QTAWS_GETAPPLICATIONCOMPONENTSTRATEGIESRESPONSE_H

#include "migrationhubstrategyresponse.h"
#include "getapplicationcomponentstrategiesrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class GetApplicationComponentStrategiesResponsePrivate;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT GetApplicationComponentStrategiesResponse : public MigrationHubStrategyResponse {
    Q_OBJECT

public:
    GetApplicationComponentStrategiesResponse(const GetApplicationComponentStrategiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetApplicationComponentStrategiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetApplicationComponentStrategiesResponse)
    Q_DISABLE_COPY(GetApplicationComponentStrategiesResponse)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
