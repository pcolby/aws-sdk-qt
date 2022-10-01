// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEKINESISSTREAMINGDESTINATIONREQUEST_H
#define QTAWS_ENABLEKINESISSTREAMINGDESTINATIONREQUEST_H

#include "dynamodbrequest.h"

namespace QtAws {
namespace DynamoDb {

class EnableKinesisStreamingDestinationRequestPrivate;

class QTAWSDYNAMODB_EXPORT EnableKinesisStreamingDestinationRequest : public DynamoDbRequest {

public:
    EnableKinesisStreamingDestinationRequest(const EnableKinesisStreamingDestinationRequest &other);
    EnableKinesisStreamingDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableKinesisStreamingDestinationRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
