// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESESSIONSREQUEST_H
#define QTAWS_DESCRIBEGAMESESSIONSREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeGameSessionsRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeGameSessionsRequest : public GameLiftRequest {

public:
    DescribeGameSessionsRequest(const DescribeGameSessionsRequest &other);
    DescribeGameSessionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGameSessionsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
