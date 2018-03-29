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

#ifndef QTAWS_CREATETRAFFICPOLICYRESPONSE_H
#define QTAWS_CREATETRAFFICPOLICYRESPONSE_H

#include "route53response.h"
#include "createtrafficpolicyrequest.h"

namespace AWS {

namespace Route53 {

class CreateTrafficPolicyResponsePrivate;

class QTAWS_EXPORT CreateTrafficPolicyResponse : public Route53Response {
    Q_OBJECT

public:
    CreateTrafficPolicyResponse(const CreateTrafficPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTrafficPolicyRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(CreateTrafficPolicyResponse)
    Q_DISABLE_COPY(CreateTrafficPolicyResponse)

};

} // namespace Route53
} // namespace AWS

#endif
