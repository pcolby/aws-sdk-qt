// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTINUOUSBACKUPSREQUEST_H
#define QTAWS_DESCRIBECONTINUOUSBACKUPSREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeContinuousBackupsRequestPrivate;

class QTAWSDYNAMODB_EXPORT DescribeContinuousBackupsRequest : public DynamoDbRequest {

public:
    DescribeContinuousBackupsRequest(const DescribeContinuousBackupsRequest &other);
    DescribeContinuousBackupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeContinuousBackupsRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
