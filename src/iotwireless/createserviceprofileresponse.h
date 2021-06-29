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

#ifndef QTAWS_CREATESERVICEPROFILERESPONSE_H
#define QTAWS_CREATESERVICEPROFILERESPONSE_H

#include "iotwirelessresponse.h"
#include "createserviceprofilerequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateServiceProfileResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT CreateServiceProfileResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    CreateServiceProfileResponse(const CreateServiceProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateServiceProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateServiceProfileResponse)
    Q_DISABLE_COPY(CreateServiceProfileResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
