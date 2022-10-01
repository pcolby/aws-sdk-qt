// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTREQUEST_H
#define QTAWS_DESCRIBEEXPORTREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeExportRequestPrivate;

class QTAWSDYNAMODB_EXPORT DescribeExportRequest : public DynamoDbRequest {

public:
    DescribeExportRequest(const DescribeExportRequest &other);
    DescribeExportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeExportRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
