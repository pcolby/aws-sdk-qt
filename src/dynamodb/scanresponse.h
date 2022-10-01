// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCANRESPONSE_H
#define QTAWS_SCANRESPONSE_H

#include "dynamodbresponse.h"
#include "scanrequest.h"

namespace QtAws {
namespace DynamoDb {

class ScanResponsePrivate;

class QTAWSDYNAMODB_EXPORT ScanResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    ScanResponse(const ScanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ScanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ScanResponse)
    Q_DISABLE_COPY(ScanResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
