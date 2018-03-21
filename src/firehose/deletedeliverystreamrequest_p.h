/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DELETEDELIVERYSTREAMREQUEST_P_H
#define QTAWS_DELETEDELIVERYSTREAMREQUEST_P_H

#include "firehose_p.h"
#include "deletedeliverystreamrequest.h"

namespace AWS {

namespace Firehose {

class DeleteDeliveryStreamRequest;

class QTAWS_EXPORT DeleteDeliveryStreamRequestPrivate : public FirehosePrivate {

public:
    DeleteDeliveryStreamRequestPrivate(const Firehose::Action action,
                                   DeleteDeliveryStreamRequest * const q);
    DeleteDeliveryStreamRequestPrivate(const DeleteDeliveryStreamRequestPrivate &other,
                                   DeleteDeliveryStreamRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDeliveryStreamRequest)

};

} // namespace Firehose
} // namespace AWS

#endif
