// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEKINESISSTREAMINGDESTINATIONRESPONSE_H
#define QTAWS_DISABLEKINESISSTREAMINGDESTINATIONRESPONSE_H

#include "dynamodbresponse.h"
#include "disablekinesisstreamingdestinationrequest.h"

namespace QtAws {
namespace DynamoDb {

class DisableKinesisStreamingDestinationResponsePrivate;

class QTAWSDYNAMODB_EXPORT DisableKinesisStreamingDestinationResponse : public DynamoDbResponse {
    Q_OBJECT

public:
    DisableKinesisStreamingDestinationResponse(const DisableKinesisStreamingDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableKinesisStreamingDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableKinesisStreamingDestinationResponse)
    Q_DISABLE_COPY(DisableKinesisStreamingDestinationResponse)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
