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

#ifndef QTAWS_DISASSOCIATEPHONENUMBERCONTACTFLOWREQUEST_P_H
#define QTAWS_DISASSOCIATEPHONENUMBERCONTACTFLOWREQUEST_P_H

#include "connectrequest_p.h"
#include "disassociatephonenumbercontactflowrequest.h"

namespace QtAws {
namespace Connect {

class DisassociatePhoneNumberContactFlowRequest;

class DisassociatePhoneNumberContactFlowRequestPrivate : public ConnectRequestPrivate {

public:
    DisassociatePhoneNumberContactFlowRequestPrivate(const ConnectRequest::Action action,
                                   DisassociatePhoneNumberContactFlowRequest * const q);
    DisassociatePhoneNumberContactFlowRequestPrivate(const DisassociatePhoneNumberContactFlowRequestPrivate &other,
                                   DisassociatePhoneNumberContactFlowRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociatePhoneNumberContactFlowRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
