// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETIMETOLIVEREQUEST_H
#define QTAWS_DESCRIBETIMETOLIVEREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeTimeToLiveRequestPrivate;

class QTAWSDYNAMODB_EXPORT DescribeTimeToLiveRequest : public DynamoDbRequest {

public:
    DescribeTimeToLiveRequest(const DescribeTimeToLiveRequest &other);
    DescribeTimeToLiveRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTimeToLiveRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
