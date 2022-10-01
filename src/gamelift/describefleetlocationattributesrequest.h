// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETLOCATIONATTRIBUTESREQUEST_H
#define QTAWS_DESCRIBEFLEETLOCATIONATTRIBUTESREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeFleetLocationAttributesRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeFleetLocationAttributesRequest : public GameLiftRequest {

public:
    DescribeFleetLocationAttributesRequest(const DescribeFleetLocationAttributesRequest &other);
    DescribeFleetLocationAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFleetLocationAttributesRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
