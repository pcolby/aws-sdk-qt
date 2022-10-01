// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCANREQUEST_P_H
#define QTAWS_SCANREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "scanrequest.h"

namespace QtAws {
namespace DynamoDb {

class ScanRequest;

class ScanRequestPrivate : public DynamoDbRequestPrivate {

public:
    ScanRequestPrivate(const DynamoDbRequest::Action action,
                                   ScanRequest * const q);
    ScanRequestPrivate(const ScanRequestPrivate &other,
                                   ScanRequest * const q);

private:
    Q_DECLARE_PUBLIC(ScanRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
