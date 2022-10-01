// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEKINESISSTREAMINGDESTINATIONREQUEST_P_H
#define QTAWS_DESCRIBEKINESISSTREAMINGDESTINATIONREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "describekinesisstreamingdestinationrequest.h"

namespace QtAws {
namespace DynamoDb {

class DescribeKinesisStreamingDestinationRequest;

class DescribeKinesisStreamingDestinationRequestPrivate : public DynamoDbRequestPrivate {

public:
    DescribeKinesisStreamingDestinationRequestPrivate(const DynamoDbRequest::Action action,
                                   DescribeKinesisStreamingDestinationRequest * const q);
    DescribeKinesisStreamingDestinationRequestPrivate(const DescribeKinesisStreamingDestinationRequestPrivate &other,
                                   DescribeKinesisStreamingDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeKinesisStreamingDestinationRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
