// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCOVERPOLLENDPOINTREQUEST_H
#define QTAWS_DISCOVERPOLLENDPOINTREQUEST_H

#include "ecsrequest.h"

namespace QtAws {
namespace Ecs {

class DiscoverPollEndpointRequestPrivate;

class QTAWSECS_EXPORT DiscoverPollEndpointRequest : public EcsRequest {

public:
    DiscoverPollEndpointRequest(const DiscoverPollEndpointRequest &other);
    DiscoverPollEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DiscoverPollEndpointRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
