// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPLAYERSESSIONSREQUEST_H
#define QTAWS_DESCRIBEPLAYERSESSIONSREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribePlayerSessionsRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribePlayerSessionsRequest : public GameLiftRequest {

public:
    DescribePlayerSessionsRequest(const DescribePlayerSessionsRequest &other);
    DescribePlayerSessionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePlayerSessionsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
