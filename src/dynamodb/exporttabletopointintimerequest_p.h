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
