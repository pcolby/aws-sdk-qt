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

#ifndef QTAWS_GETACCOUNTSENDINGENABLEDREQUEST_P_H
#define QTAWS_GETACCOUNTSENDINGENABLEDREQUEST_P_H

#include "sesrequest_p.h"
#include "getaccountsendingenabledrequest.h"

namespace QtAws {
namespace SES {

class GetAccountSendingEnabledRequest;

class QTAWS_EXPORT GetAccountSendingEnabledRequestPrivate : public SesRequestPrivate {

public:
    GetAccountSendingEnabledRequestPrivate(const SesRequest::Action action,
                                   GetAccountSendingEnabledRequest * const q);
    GetAccountSendingEnabledRequestPrivate(const GetAccountSendingEnabledRequestPrivate &other,
                                   GetAccountSendingEnabledRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAccountSendingEnabledRequest)

};

} // namespace SES
} // namespace QtAws

#endif
