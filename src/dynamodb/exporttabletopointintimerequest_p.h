// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTTABLETOPOINTINTIMEREQUEST_P_H
#define QTAWS_EXPORTTABLETOPOINTINTIMEREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "exporttabletopointintimerequest.h"

namespace QtAws {
namespace DynamoDb {

class ExportTableToPointInTimeRequest;

class ExportTableToPointInTimeRequestPrivate : public DynamoDbRequestPrivate {

public:
    ExportTableToPointInTimeRequestPrivate(const DynamoDbRequest::Action action,
                                   ExportTableToPointInTimeRequest * const q);
    ExportTableToPointInTimeRequestPrivate(const ExportTableToPointInTimeRequestPrivate &other,
                                   ExportTableToPointInTimeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportTableToPointInTimeRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
