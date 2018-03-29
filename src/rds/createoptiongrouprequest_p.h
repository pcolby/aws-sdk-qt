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

#ifndef QTAWS_CREATEOPTIONGROUPREQUEST_P_H
#define QTAWS_CREATEOPTIONGROUPREQUEST_P_H

#include "rds_p.h"
#include "createoptiongrouprequest.h"

namespace AWS {

namespace RDS {

class CreateOptionGroupRequest;

class QTAWS_EXPORT CreateOptionGroupRequestPrivate : public RDSPrivate {

public:
    CreateOptionGroupRequestPrivate(const RDS::Action action,
                                   CreateOptionGroupRequest * const q);
    CreateOptionGroupRequestPrivate(const CreateOptionGroupRequestPrivate &other,
                                   CreateOptionGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateOptionGroupRequest)

};

} // namespace RDS
} // namespace AWS

#endif
