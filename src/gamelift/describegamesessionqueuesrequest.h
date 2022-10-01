// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESESSIONQUEUESREQUEST_H
#define QTAWS_DESCRIBEGAMESESSIONQUEUESREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeGameSessionQueuesRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeGameSessionQueuesRequest : public GameLiftRequest {

public:
    DescribeGameSessionQueuesRequest(const DescribeGameSessionQueuesRequest &other);
    DescribeGameSessionQueuesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGameSessionQueuesRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
