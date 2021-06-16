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

#ifndef QTAWS_GETCONFIGURATIONPROFILERESPONSE_H
#define QTAWS_GETCONFIGURATIONPROFILERESPONSE_H

#include "appconfigresponse.h"
#include "getconfigurationprofilerequest.h"

namespace QtAws {
namespace AppConfig {

class GetConfigurationProfileResponsePrivate;

class QTAWS_EXPORT GetConfigurationProfileResponse : public AppConfigResponse {
    Q_OBJECT

public:
    GetConfigurationProfileResponse(const GetConfigurationProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConfigurationProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConfigurationProfileResponse)
    Q_DISABLE_COPY(GetConfigurationProfileResponse)

};

} // namespace AppConfig
} // namespace QtAws

#endif
