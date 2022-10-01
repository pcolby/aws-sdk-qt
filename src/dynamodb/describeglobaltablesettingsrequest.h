// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALTABLESETTINGSREQUEST_H
#define QTAWS_DESCRIBEGLOBALTABLESETTINGSREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeGlobalTableSettingsRequestPrivate;

class QTAWSDYNAMODB_EXPORT DescribeGlobalTableSettingsRequest : public DynamoDbRequest {

public:
    DescribeGlobalTableSettingsRequest(const DescribeGlobalTableSettingsRequest &other);
    DescribeGlobalTableSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGlobalTableSettingsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
