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

#ifndef QTAWS_REMOVETHINGFROMTHINGGROUPRESPONSE_H
#define QTAWS_REMOVETHINGFROMTHINGGROUPRESPONSE_H

#include "iotresponse.h"
#include "removethingfromthinggrouprequest.h"

namespace QtAws {
namespace IoT {

class RemoveThingFromThingGroupResponsePrivate;

class QTAWS_EXPORT RemoveThingFromThingGroupResponse : public IoTResponse {
    Q_OBJECT

public:
    RemoveThingFromThingGroupResponse(const RemoveThingFromThingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RemoveThingFromThingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveThingFromThingGroupResponse)
    Q_DISABLE_COPY(RemoveThingFromThingGroupResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
