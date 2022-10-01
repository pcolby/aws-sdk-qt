// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETATTRIBUTESREQUEST_H
#define QTAWS_DESCRIBEFLEETATTRIBUTESREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetAttributesRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeFleetAttributesRequest : public GameLiftRequest {

public:
    DescribeFleetAttributesRequest(const DescribeFleetAttributesRequest &other);
    DescribeFleetAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetAttributesRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
