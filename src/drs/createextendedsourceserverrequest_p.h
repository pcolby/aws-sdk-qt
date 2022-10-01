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

#ifndef QTAWS_CREATEEXTENDEDSOURCESERVERREQUEST_P_H
#define QTAWS_CREATEEXTENDEDSOURCESERVERREQUEST_P_H

#include "drsrequest_p.h"
#include "createextendedsourceserverrequest.h"

namespace QtAws {
namespace Drs {

class CreateExtendedSourceServerRequest;

class CreateExtendedSourceServerRequestPrivate : public DrsRequestPrivate {

public:
    CreateExtendedSourceServerRequestPrivate(const DrsRequest::Action action,
                                   CreateExtendedSourceServerRequest * const q);
    CreateExtendedSourceServerRequestPrivate(const CreateExtendedSourceServerRequestPrivate &other,
                                   CreateExtendedSourceServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateExtendedSourceServerRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
