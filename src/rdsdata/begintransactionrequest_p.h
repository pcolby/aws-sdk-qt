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

#ifndef QTAWS_BEGINTRANSACTIONREQUEST_P_H
#define QTAWS_BEGINTRANSACTIONREQUEST_P_H

#include "rdsdatarequest_p.h"
#include "begintransactionrequest.h"

namespace QtAws {
namespace RdsData {

class BeginTransactionRequest;

class BeginTransactionRequestPrivate : public RdsDataRequestPrivate {

public:
    BeginTransactionRequestPrivate(const RdsDataRequest::Action action,
                                   BeginTransactionRequest * const q);
    BeginTransactionRequestPrivate(const BeginTransactionRequestPrivate &other,
                                   BeginTransactionRequest * const q);

private:
    Q_DECLARE_PUBLIC(BeginTransactionRequest)

};

} // namespace RdsData
} // namespace QtAws

#endif
