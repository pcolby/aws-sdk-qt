// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALTABLEREQUEST_H
#define QTAWS_DESCRIBEGLOBALTABLEREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeGlobalTableRequestPrivate;

class QTAWSDYNAMODB_EXPORT DescribeGlobalTableRequest : public DynamoDbRequest {

public:
    DescribeGlobalTableRequest(const DescribeGlobalTableRequest &other);
    DescribeGlobalTableRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGlobalTableRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
