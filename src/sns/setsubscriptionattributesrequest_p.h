/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_SETSUBSCRIPTIONATTRIBUTESREQUEST_P_H
#define QTAWS_SETSUBSCRIPTIONATTRIBUTESREQUEST_P_H

#include "snsrequest_p.h"
#include "setsubscriptionattributesrequest.h"

namespace QtAws {
namespace SNS {

class SetSubscriptionAttributesRequest;

class QTAWS_EXPORT SetSubscriptionAttributesRequestPrivate : public SnsRequestPrivate {

public:
    SetSubscriptionAttributesRequestPrivate(const SnsRequest::Action action,
                                   SetSubscriptionAttributesRequest * const q);
    SetSubscriptionAttributesRequestPrivate(const SetSubscriptionAttributesRequestPrivate &other,
                                   SetSubscriptionAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetSubscriptionAttributesRequest)

};

} // namespace SNS
} // namespace QtAws

#endif
