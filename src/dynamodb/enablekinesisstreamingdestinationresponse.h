// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEKINESISSTREAMINGDESTINATIONRESPONSE_H
#define QTAWS_ENABLEKINESISSTREAMINGDESTINATIONRESPONSE_H

#include "dynamodbresponse.h"
#include "enablekinesisstreamingdestinationrequest.h"

namespace QtAws {
namespace DynamoDb {

class EnableKinesisStreamingDestinationResponsePrivate;

class QTAWSDYNAMODB_EXPORT EnableKinesisStreamingDestinationResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    EnableKinesisStreamingDestinationResponse(const EnableKinesisStreamingDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableKinesisStreamingDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableKinesisStreamingDestinationResponse)
    Q_DISABLE_COPY(EnableKinesisStreamingDestinationResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
