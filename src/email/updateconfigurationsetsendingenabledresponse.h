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

#ifndef QTAWS_UPDATECONFIGURATIONSETSENDINGENABLEDRESPONSE_H
#define QTAWS_UPDATECONFIGURATIONSETSENDINGENABLEDRESPONSE_H

#include "sesresponse.h"
#include "updateconfigurationsetsendingenabledrequest.h"

namespace QtAws {
namespace SES {

class UpdateConfigurationSetSendingEnabledResponsePrivate;

class QTAWS_EXPORT UpdateConfigurationSetSendingEnabledResponse : public SESResponse {
    Q_OBJECT

public:
    UpdateConfigurationSetSendingEnabledResponse(const UpdateConfigurationSetSendingEnabledRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConfigurationSetSendingEnabledRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(UpdateConfigurationSetSendingEnabledResponse)
    Q_DISABLE_COPY(UpdateConfigurationSetSendingEnabledResponse)

};

} // namespace SES
} // namespace QtAws

#endif
