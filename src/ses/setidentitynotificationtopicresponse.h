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

#ifndef QTAWS_SETIDENTITYNOTIFICATIONTOPICRESPONSE_H
#define QTAWS_SETIDENTITYNOTIFICATIONTOPICRESPONSE_H

#include "sesresponse.h"
#include "setidentitynotificationtopicrequest.h"

namespace QtAws {
namespace SES {

class SetIdentityNotificationTopicResponsePrivate;

class QTAWS_EXPORT SetIdentityNotificationTopicResponse : public SesResponse {
    Q_OBJECT

public:
    SetIdentityNotificationTopicResponse(const SetIdentityNotificationTopicRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetIdentityNotificationTopicRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetIdentityNotificationTopicResponse)
    Q_DISABLE_COPY(SetIdentityNotificationTopicResponse)

};

} // namespace SES
} // namespace QtAws

#endif
