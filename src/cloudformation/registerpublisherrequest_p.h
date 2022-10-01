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

#ifndef QTAWS_REGISTERPUBLISHERREQUEST_P_H
#define QTAWS_REGISTERPUBLISHERREQUEST_P_H

#include "cloudformationrequest_p.h"
#include "registerpublisherrequest.h"

namespace QtAws {
namespace CloudFormation {

class RegisterPublisherRequest;

class RegisterPublisherRequestPrivate : public CloudFormationRequestPrivate {

public:
    RegisterPublisherRequestPrivate(const CloudFormationRequest::Action action,
                                   RegisterPublisherRequest * const q);
    RegisterPublisherRequestPrivate(const RegisterPublisherRequestPrivate &other,
                                   RegisterPublisherRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterPublisherRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
