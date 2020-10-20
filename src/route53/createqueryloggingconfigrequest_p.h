/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_CREATEQUERYLOGGINGCONFIGREQUEST_P_H
#define QTAWS_CREATEQUERYLOGGINGCONFIGREQUEST_P_H

#include "route53request_p.h"
#include "createqueryloggingconfigrequest.h"

namespace QtAws {
namespace Route53 {

class CreateQueryLoggingConfigRequest;

class QTAWS_EXPORT CreateQueryLoggingConfigRequestPrivate : public Route53RequestPrivate {

public:
    CreateQueryLoggingConfigRequestPrivate(const Route53Request::Action action,
                                   CreateQueryLoggingConfigRequest * const q);
    CreateQueryLoggingConfigRequestPrivate(const CreateQueryLoggingConfigRequestPrivate &other,
                                   CreateQueryLoggingConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateQueryLoggingConfigRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
