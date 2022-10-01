// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTINUOUSBACKUPSREQUEST_P_H
#define QTAWS_DESCRIBECONTINUOUSBACKUPSREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "describecontinuousbackupsrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeContinuousBackupsRequest;

class DescribeContinuousBackupsRequestPrivate : public DynamoDbRequestPrivate {

public:
    DescribeContinuousBackupsRequestPrivate(const DynamoDbRequest::Action action,
                                   DescribeContinuousBackupsRequest * const q);
    DescribeContinuousBackupsRequestPrivate(const DescribeContinuousBackupsRequestPrivate &other,
                                   DescribeContinuousBackupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeContinuousBackupsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
