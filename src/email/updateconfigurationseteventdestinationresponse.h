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

#ifndef QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONRESPONSE_H
#define QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONRESPONSE_H

#include "sesresponse.h"
#include "updateconfigurationseteventdestinationrequest.h"

namespace AWS {

namespace SES {

class UpdateConfigurationSetEventDestinationResponsePrivate;

class QTAWS_EXPORT UpdateConfigurationSetEventDestinationResponse : public SESResponse {
    Q_OBJECT

public:
    UpdateConfigurationSetEventDestinationResponse(const UpdateConfigurationSetEventDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConfigurationSetEventDestinationRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UpdateConfigurationSetEventDestinationResponse)
    Q_DISABLE_COPY(UpdateConfigurationSetEventDestinationResponse)

};

} // namespace SES
} // namespace AWS

#endif
