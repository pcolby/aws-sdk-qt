// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESESSIONPLACEMENTREQUEST_H
#define QTAWS_DESCRIBEGAMESESSIONPLACEMENTREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeGameSessionPlacementRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeGameSessionPlacementRequest : public GameLiftRequest {

public:
    DescribeGameSessionPlacementRequest(const DescribeGameSessionPlacementRequest &other);
    DescribeGameSessionPlacementRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGameSessionPlacementRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
