// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGAMESERVERREQUEST_H
#define QTAWS_DESCRIBEGAMESERVERREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeGameServerRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeGameServerRequest : public GameLiftRequest {

public:
    DescribeGameServerRequest(const DescribeGameServerRequest &other);
    DescribeGameServerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGameServerRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
