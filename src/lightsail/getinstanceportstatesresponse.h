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

#ifndef QTAWS_GETINSTANCEPORTSTATESRESPONSE_H
#define QTAWS_GETINSTANCEPORTSTATESRESPONSE_H

#include "lightsailresponse.h"
#include "getinstanceportstatesrequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstancePortStatesResponsePrivate;

class QTAWS_EXPORT GetInstancePortStatesResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetInstancePortStatesResponse(const GetInstancePortStatesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetInstancePortStatesRequest * request() const override;

protected slots:
    virtual void parseSuccess(QIODevice &response) override;

private:
    Q_DECLARE_PRIVATE(GetInstancePortStatesResponse)
    Q_DISABLE_COPY(GetInstancePortStatesResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
