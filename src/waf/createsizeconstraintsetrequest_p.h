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

#ifndef QTAWS_CREATESIZECONSTRAINTSETREQUEST_P_H
#define QTAWS_CREATESIZECONSTRAINTSETREQUEST_P_H

#include "wafrequest_p.h"
#include "createsizeconstraintsetrequest.h"

namespace QtAws {
namespace WAF {

class CreateSizeConstraintSetRequest;

class QTAWS_EXPORT CreateSizeConstraintSetRequestPrivate : public WafRequestPrivate {

public:
    CreateSizeConstraintSetRequestPrivate(const WafRequest::Action action,
                                   CreateSizeConstraintSetRequest * const q);
    CreateSizeConstraintSetRequestPrivate(const CreateSizeConstraintSetRequestPrivate &other,
                                   CreateSizeConstraintSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSizeConstraintSetRequest)

};

} // namespace WAF
} // namespace QtAws

#endif
