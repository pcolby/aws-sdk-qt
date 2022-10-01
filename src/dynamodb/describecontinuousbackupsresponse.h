// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONTINUOUSBACKUPSRESPONSE_H
#define QTAWS_DESCRIBECONTINUOUSBACKUPSRESPONSE_H

#include "dynamodbresponse.h"
#include "describecontinuousbackupsrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeContinuousBackupsResponsePrivate;

class QTAWSDYNAMODB_EXPORT DescribeContinuousBackupsResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    DescribeContinuousBackupsResponse(const DescribeContinuousBackupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeContinuousBackupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeContinuousBackupsResponse)
    Q_DISABLE_COPY(DescribeContinuousBackupsResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
