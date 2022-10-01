// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICESREQUEST_H
#define QTAWS_DESCRIBESERVICESREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class DescribeServicesRequestPrivate;

class QTAWSECS_EXPORT DescribeServicesRequest : public EcsRequest {

public:
    DescribeServicesRequest(const DescribeServicesRequest &other);
    DescribeServicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeServicesRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
