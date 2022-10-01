// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALTABLESETTINGSRESPONSE_H
#define QTAWS_DESCRIBEGLOBALTABLESETTINGSRESPONSE_H

#include "dynamodbresponse.h"
#include "describeglobaltablesettingsrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeGlobalTableSettingsResponsePrivate;

class QTAWSDYNAMODB_EXPORT DescribeGlobalTableSettingsResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    DescribeGlobalTableSettingsResponse(const DescribeGlobalTableSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGlobalTableSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGlobalTableSettingsResponse)
    Q_DISABLE_COPY(DescribeGlobalTableSettingsResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
