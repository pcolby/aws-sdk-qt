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

#ifndef QTAWS_CANCELQUANTUMTASKREQUEST_P_H
#define QTAWS_CANCELQUANTUMTASKREQUEST_P_H

#include "braketrequest_p.h"
#include "cancelquantumtaskrequest.h"

namespace QtAws {
namespace Braket {

class CancelQuantumTaskRequest;

class CancelQuantumTaskRequestPrivate : public BraketRequestPrivate {

public:
    CancelQuantumTaskRequestPrivate(const BraketRequest::Action action,
                                   CancelQuantumTaskRequest * const q);
    CancelQuantumTaskRequestPrivate(const CancelQuantumTaskRequestPrivate &other,
                                   CancelQuantumTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelQuantumTaskRequest)

};

} // namespace Braket
} // namespace QtAws

#endif
