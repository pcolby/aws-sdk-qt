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

#ifndef QTAWS_GETMIGRATIONSRESPONSE_H
#define QTAWS_GETMIGRATIONSRESPONSE_H

#include "lexmodelbuildingserviceresponse.h"
#include "getmigrationsrequest.h"

namespace QtAws {
namespace LexModelBuildingService {

class GetMigrationsResponsePrivate;

class QTAWSLEXMODELBUILDINGSERVICE_EXPORT GetMigrationsResponse : public LexModelBuildingServiceResponse {
    Q_OBJECT

public:
    GetMigrationsResponse(const GetMigrationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMigrationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMigrationsResponse)
    Q_DISABLE_COPY(GetMigrationsResponse)

};

} // namespace LexModelBuildingService
} // namespace QtAws

#endif
