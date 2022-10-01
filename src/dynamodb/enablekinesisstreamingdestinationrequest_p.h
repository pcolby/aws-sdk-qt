// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEKINESISSTREAMINGDESTINATIONREQUEST_P_H
#define QTAWS_ENABLEKINESISSTREAMINGDESTINATIONREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "enablekinesisstreamingdestinationrequest.h"

namespace QtAws {
namespace DynamoDb {

class EnableKinesisStreamingDestinationRequest;

class EnableKinesisStreamingDestinationRequestPrivate : public DynamoDbRequestPrivate {

public:
    EnableKinesisStreamingDestinationRequestPrivate(const DynamoDbRequest::Action action,
                                   EnableKinesisStreamingDestinationRequest * const q);
    EnableKinesisStreamingDestinationRequestPrivate(const EnableKinesisStreamingDestinationRequestPrivate &other,
                                   EnableKinesisStreamingDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableKinesisStreamingDestinationRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
