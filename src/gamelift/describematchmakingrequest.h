// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMATCHMAKINGREQUEST_H
#define QTAWS_DESCRIBEMATCHMAKINGREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeMatchmakingRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeMatchmakingRequest : public GameLiftRequest {

public:
    DescribeMatchmakingRequest(const DescribeMatchmakingRequest &other);
    DescribeMatchmakingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMatchmakingRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
