/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_VALIDATECONFIGURATIONSETTINGSRESPONSE_H
#define QTAWS_VALIDATECONFIGURATIONSETTINGSRESPONSE_H

#include "elasticbeanstalkresponse.h"
#include "validateconfigurationsettingsrequest.h"

namespace AWS {

namespace elasticbeanstalk {

class ValidateConfigurationSettingsResponsePrivate;

class QTAWS_EXPORT ValidateConfigurationSettingsResponse : public ValidateConfigurationSettingsResponse {
    Q_OBJECT

public:
    ValidateConfigurationSettingsResponse(const ValidateConfigurationSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ValidateConfigurationSettingsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ValidateConfigurationSettingsResponse)
    Q_DISABLE_COPY(ValidateConfigurationSettingsResponse)

};

} // namespace elasticbeanstalk
} // namespace AWS

#endif
