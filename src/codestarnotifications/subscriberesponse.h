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

#ifndef QTAWS_SUBSCRIBERESPONSE_H
#define QTAWS_SUBSCRIBERESPONSE_H

#include "codestarnotificationsresponse.h"
#include "subscriberequest.h"

namespace QtAws {
namespace CodestarNotifications {

class SubscribeResponsePrivate;

class QTAWSCODESTARNOTIFICATIONS_EXPORT SubscribeResponse : public CodestarNotificationsResponse {
    Q_OBJECT

public:
    SubscribeResponse(const SubscribeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SubscribeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SubscribeResponse)
    Q_DISABLE_COPY(SubscribeResponse)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
