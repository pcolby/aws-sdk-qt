// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUEUEREQUEST_H
#define QTAWS_DESCRIBEQUEUEREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class DescribeQueueRequestPrivate;

class QTAWSCONNECT_EXPORT DescribeQueueRequest : public ConnectRequest {

public:
    DescribeQueueRequest(const DescribeQueueRequest &other);
    DescribeQueueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeQueueRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
