// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALTABLESETTINGSREQUEST_P_H
#define QTAWS_DESCRIBEGLOBALTABLESETTINGSREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "describeglobaltablesettingsrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeGlobalTableSettingsRequest;

class DescribeGlobalTableSettingsRequestPrivate : public DynamoDbRequestPrivate {

public:
    DescribeGlobalTableSettingsRequestPrivate(const DynamoDbRequest::Action action,
                                   DescribeGlobalTableSettingsRequest * const q);
    DescribeGlobalTableSettingsRequestPrivate(const DescribeGlobalTableSettingsRequestPrivate &other,
                                   DescribeGlobalTableSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGlobalTableSettingsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
