// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLAYREQUEST_H
#define QTAWS_DESCRIBEREPLAYREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class DescribeReplayRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT DescribeReplayRequest : public EventBridgeRequest {

public:
    DescribeReplayRequest(const DescribeReplayRequest &other);
    DescribeReplayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReplayRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
