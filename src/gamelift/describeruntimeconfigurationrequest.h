// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERUNTIMECONFIGURATIONREQUEST_H
#define QTAWS_DESCRIBERUNTIMECONFIGURATIONREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class DescribeRuntimeConfigurationRequestPrivate;

class QTAWSGAMELIFT_EXPORT DescribeRuntimeConfigurationRequest : public GameLiftRequest {

public:
    DescribeRuntimeConfigurationRequest(const DescribeRuntimeConfigurationRequest &other);
    DescribeRuntimeConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRuntimeConfigurationRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
