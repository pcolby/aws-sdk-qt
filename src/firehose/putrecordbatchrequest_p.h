/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_PUTRECORDBATCHREQUEST_P_H
#define QTAWS_PUTRECORDBATCHREQUEST_P_H

#include "firehoserequest_p.h"
#include "putrecordbatchrequest.h"

namespace QtAws {
namespace Firehose {

class PutRecordBatchRequest;

class QTAWS_EXPORT PutRecordBatchRequestPrivate : public FirehoseRequestPrivate {

public:
    PutRecordBatchRequestPrivate(const Firehose::Action action,
                                   PutRecordBatchRequest * const q);
    PutRecordBatchRequestPrivate(const PutRecordBatchRequestPrivate &other,
                                   PutRecordBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRecordBatchRequest)

};

} // namespace Firehose
} // namespace QtAws

#endif
