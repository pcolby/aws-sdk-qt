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

#ifndef QTAWS_DESCRIBEGLOBALTABLESETTINGSREQUEST_P_H
#define QTAWS_DESCRIBEGLOBALTABLESETTINGSREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "describeglobaltablesettingsrequest.h"

namespace QtAws {
namespace DynamoDB {

class DescribeGlobalTableSettingsRequest;

class QTAWS_EXPORT DescribeGlobalTableSettingsRequestPrivate : public DynamoDBRequestPrivate {

public:
    DescribeGlobalTableSettingsRequestPrivate(const DynamoDBRequest::Action action,
                                   DescribeGlobalTableSettingsRequest * const q);
    DescribeGlobalTableSettingsRequestPrivate(const DescribeGlobalTableSettingsRequestPrivate &other,
                                   DescribeGlobalTableSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGlobalTableSettingsRequest)

};

} // namespace DynamoDB
} // namespace QtAws

#endif
