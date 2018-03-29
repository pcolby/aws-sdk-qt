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

#ifndef QTAWS_DESCRIBEPROTECTIONREQUEST_P_H
#define QTAWS_DESCRIBEPROTECTIONREQUEST_P_H

#include "shieldrequest_p.h"
#include "describeprotectionrequest.h"

namespace QtAws {
namespace Shield {

class DescribeProtectionRequest;

class QTAWS_EXPORT DescribeProtectionRequestPrivate : public ShieldRequestPrivate {

public:
    DescribeProtectionRequestPrivate(const ShieldRequest::Action action,
                                   DescribeProtectionRequest * const q);
    DescribeProtectionRequestPrivate(const DescribeProtectionRequestPrivate &other,
                                   DescribeProtectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProtectionRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
