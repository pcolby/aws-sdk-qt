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

#ifndef QTAWS_EXECUTESTATEMENTREQUEST_P_H
#define QTAWS_EXECUTESTATEMENTREQUEST_P_H

#include "rdsdatarequest_p.h"
#include "executestatementrequest.h"

namespace QtAws {
namespace RdsData {

class ExecuteStatementRequest;

class ExecuteStatementRequestPrivate : public RdsDataRequestPrivate {

public:
    ExecuteStatementRequestPrivate(const RdsDataRequest::Action action,
                                   ExecuteStatementRequest * const q);
    ExecuteStatementRequestPrivate(const ExecuteStatementRequestPrivate &other,
                                   ExecuteStatementRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExecuteStatementRequest)

};

} // namespace RdsData
} // namespace QtAws

#endif
