// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATABASEREQUEST_P_H
#define QTAWS_DESCRIBEDATABASEREQUEST_P_H

#include "timestreamwriterequest_p.h"
#include "describedatabaserequest.h"

namespace QtAws {
namespace TimestreamWrite {

class DescribeDatabaseRequest;

class DescribeDatabaseRequestPrivate : public TimestreamWriteRequestPrivate {

public:
    DescribeDatabaseRequestPrivate(const TimestreamWriteRequest::Action action,
                                   DescribeDatabaseRequest * const q);
    DescribeDatabaseRequestPrivate(const DescribeDatabaseRequestPrivate &other,
                                   DescribeDatabaseRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDatabaseRequest)

};

} // namespace TimestreamWrite
} // namespace QtAws

#endif
