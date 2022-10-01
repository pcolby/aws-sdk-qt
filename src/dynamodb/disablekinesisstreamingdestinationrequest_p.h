// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEKINESISSTREAMINGDESTINATIONREQUEST_P_H
#define QTAWS_DISABLEKINESISSTREAMINGDESTINATIONREQUEST_P_H

#include "dynamodbrequest_p.h"
#include "disablekinesisstreamingdestinationrequest.h"

namespace QtAws {
namespace DynamoDb {

class DisableKinesisStreamingDestinationRequest;

class DisableKinesisStreamingDestinationRequestPrivate : public DynamoDbRequestPrivate {

public:
    DisableKinesisStreamingDestinationRequestPrivate(const DynamoDbRequest::Action action,
                                   DisableKinesisStreamingDestinationRequest * const q);
    DisableKinesisStreamingDestinationRequestPrivate(const DisableKinesisStreamingDestinationRequestPrivate &other,
                                   DisableKinesisStreamingDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableKinesisStreamingDestinationRequest)

};

} // namespace DynamoDb
} // namespace QtAws

#endif
