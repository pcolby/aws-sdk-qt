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

#ifndef QTAWS_CREATETRAFFICPOLICYVERSIONREQUEST_P_H
#define QTAWS_CREATETRAFFICPOLICYVERSIONREQUEST_P_H

#include "route53request_p.h"
#include "createtrafficpolicyversionrequest.h"

namespace QtAws {
namespace Route53 {

class CreateTrafficPolicyVersionRequest;

class QTAWS_EXPORT CreateTrafficPolicyVersionRequestPrivate : public Route53RequestPrivate {

public:
    CreateTrafficPolicyVersionRequestPrivate(const Route53Request::Action action,
                                   CreateTrafficPolicyVersionRequest * const q);
    CreateTrafficPolicyVersionRequestPrivate(const CreateTrafficPolicyVersionRequestPrivate &other,
                                   CreateTrafficPolicyVersionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTrafficPolicyVersionRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
