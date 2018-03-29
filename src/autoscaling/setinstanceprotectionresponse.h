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

#ifndef QTAWS_SETINSTANCEPROTECTIONRESPONSE_H
#define QTAWS_SETINSTANCEPROTECTIONRESPONSE_H

#include "autoscalingresponse.h"
#include "setinstanceprotectionrequest.h"

namespace QtAws {
namespace AutoScaling {

class SetInstanceProtectionResponsePrivate;

class QTAWS_EXPORT SetInstanceProtectionResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    SetInstanceProtectionResponse(const SetInstanceProtectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetInstanceProtectionRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SetInstanceProtectionResponse)
    Q_DISABLE_COPY(SetInstanceProtectionResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
