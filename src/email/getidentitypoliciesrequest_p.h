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

#ifndef QTAWS_GETIDENTITYPOLICIESREQUEST_P_H
#define QTAWS_GETIDENTITYPOLICIESREQUEST_P_H

#include "ses_p.h"
#include "getidentitypoliciesrequest.h"

namespace AWS {

namespace SES {

class GetIdentityPoliciesRequest;

class QTAWS_EXPORT GetIdentityPoliciesRequestPrivate : public SESPrivate {

public:
    GetIdentityPoliciesRequestPrivate(const SES::Action action,
                                   GetIdentityPoliciesRequest * const q);
    GetIdentityPoliciesRequestPrivate(const GetIdentityPoliciesRequestPrivate &other,
                                   GetIdentityPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIdentityPoliciesRequest)

};

} // namespace SES
} // namespace AWS

#endif
