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

#ifndef QTAWS_DELETECUSTOMDATAIDENTIFIERREQUEST_P_H
#define QTAWS_DELETECUSTOMDATAIDENTIFIERREQUEST_P_H

#include "macie2request_p.h"
#include "deletecustomdataidentifierrequest.h"

namespace QtAws {
namespace Macie2 {

class DeleteCustomDataIdentifierRequest;

class QTAWS_EXPORT DeleteCustomDataIdentifierRequestPrivate : public Macie2RequestPrivate {

public:
    DeleteCustomDataIdentifierRequestPrivate(const Macie2Request::Action action,
                                   DeleteCustomDataIdentifierRequest * const q);
    DeleteCustomDataIdentifierRequestPrivate(const DeleteCustomDataIdentifierRequestPrivate &other,
                                   DeleteCustomDataIdentifierRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteCustomDataIdentifierRequest)

};

} // namespace Macie2
} // namespace QtAws

#endif
