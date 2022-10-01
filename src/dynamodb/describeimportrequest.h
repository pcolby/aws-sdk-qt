// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMPORTREQUEST_H
#define QTAWS_DESCRIBEIMPORTREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeImportRequestPrivate;

class QTAWSDYNAMODB_EXPORT DescribeImportRequest : public DynamoDbRequest {

public:
    DescribeImportRequest(const DescribeImportRequest &other);
    DescribeImportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeImportRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
