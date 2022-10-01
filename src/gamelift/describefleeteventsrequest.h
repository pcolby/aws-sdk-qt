// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETEVENTSREQUEST_H
#define QTAWS_DESCRIBEFLEETEVENTSREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetEventsRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeFleetEventsRequest : public GameLiftRequest {

public:
    DescribeFleetEventsRequest(const DescribeFleetEventsRequest &other);
    DescribeFleetEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetEventsRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
