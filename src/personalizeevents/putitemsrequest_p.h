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

#ifndef QTAWS_PUTITEMSREQUEST_P_H
#define QTAWS_PUTITEMSREQUEST_P_H

#include "personalizeeventsrequest_p.h"
#include "putitemsrequest.h"

namespace QtAws {
namespace PersonalizeEvents {

class PutItemsRequest;

class QTAWS_EXPORT PutItemsRequestPrivate : public PersonalizeEventsRequestPrivate {

public:
    PutItemsRequestPrivate(const PersonalizeEventsRequest::Action action,
                                   PutItemsRequest * const q);
    PutItemsRequestPrivate(const PutItemsRequestPrivate &other,
                                   PutItemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutItemsRequest)

};

} // namespace PersonalizeEvents
} // namespace QtAws

#endif
