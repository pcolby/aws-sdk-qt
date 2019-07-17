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

#ifndef QTAWS_LISTDELIVERYSTREAMSREQUEST_P_H
#define QTAWS_LISTDELIVERYSTREAMSREQUEST_P_H

#include "firehoserequest_p.h"
#include "listdeliverystreamsrequest.h"

namespace QtAws {
namespace Firehose {

class ListDeliveryStreamsRequest;

class QTAWS_EXPORT ListDeliveryStreamsRequestPrivate : public FirehoseRequestPrivate {

public:
    ListDeliveryStreamsRequestPrivate(const FirehoseRequest::Action action,
                                   ListDeliveryStreamsRequest * const q);
    ListDeliveryStreamsRequestPrivate(const ListDeliveryStreamsRequestPrivate &other,
                                   ListDeliveryStreamsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListDeliveryStreamsRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
