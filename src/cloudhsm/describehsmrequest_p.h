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

#ifndef QTAWS_DESCRIBEHSMREQUEST_P_H
#define QTAWS_DESCRIBEHSMREQUEST_P_H

#include "cloudhsm_p.h"
#include "describehsmrequest.h"

namespace AWS {

namespace CloudHSM {

class DescribeHsmRequest;

class QTAWS_EXPORT DescribeHsmRequestPrivate : public CloudHSMPrivate {

public:
    DescribeHsmRequestPrivate(const CloudHSM::Action action,
                                   DescribeHsmRequest * const q);
    DescribeHsmRequestPrivate(const DescribeHsmRequestPrivate &other,
                                   DescribeHsmRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHsmRequest)

};

} // namespace CloudHSM
} // namespace AWS

#endif
