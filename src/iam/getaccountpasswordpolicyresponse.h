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

#ifndef QTAWS_GETACCOUNTPASSWORDPOLICYRESPONSE_H
#define QTAWS_GETACCOUNTPASSWORDPOLICYRESPONSE_H

#include "iamresponse.h"
#include "getaccountpasswordpolicyrequest.h"

namespace AWS {

namespace IAM {

class GetAccountPasswordPolicyResponsePrivate;

class QTAWS_EXPORT GetAccountPasswordPolicyResponse : public IAMResponse {
    Q_OBJECT

public:
    GetAccountPasswordPolicyResponse(const GetAccountPasswordPolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAccountPasswordPolicyRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(GetAccountPasswordPolicyResponse)
    Q_DISABLE_COPY(GetAccountPasswordPolicyResponse)

};

} // namespace IAM
} // namespace AWS

#endif
