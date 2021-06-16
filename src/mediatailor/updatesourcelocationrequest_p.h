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

#ifndef QTAWS_UPDATESOURCELOCATIONREQUEST_P_H
#define QTAWS_UPDATESOURCELOCATIONREQUEST_P_H

#include "mediatailorrequest_p.h"
#include "updatesourcelocationrequest.h"

namespace QtAws {
namespace MediaTailor {

class UpdateSourceLocationRequest;

class QTAWS_EXPORT UpdateSourceLocationRequestPrivate : public MediaTailorRequestPrivate {

public:
    UpdateSourceLocationRequestPrivate(const MediaTailorRequest::Action action,
                                   UpdateSourceLocationRequest * const q);
    UpdateSourceLocationRequestPrivate(const UpdateSourceLocationRequestPrivate &other,
                                   UpdateSourceLocationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSourceLocationRequest)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
