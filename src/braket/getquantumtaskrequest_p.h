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

#ifndef QTAWS_GETQUANTUMTASKREQUEST_P_H
#define QTAWS_GETQUANTUMTASKREQUEST_P_H

#include "braketrequest_p.h"
#include "getquantumtaskrequest.h"

namespace QtAws {
namespace Braket {

class GetQuantumTaskRequest;

class QTAWS_EXPORT GetQuantumTaskRequestPrivate : public BraketRequestPrivate {

public:
    GetQuantumTaskRequestPrivate(const BraketRequest::Action action,
                                   GetQuantumTaskRequest * const q);
    GetQuantumTaskRequestPrivate(const GetQuantumTaskRequestPrivate &other,
                                   GetQuantumTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetQuantumTaskRequest)

};

} // namespace Braket
} // namespace QtAws

#endif
