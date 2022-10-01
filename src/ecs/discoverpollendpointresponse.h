// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCOVERPOLLENDPOINTRESPONSE_H
#define QTAWS_DISCOVERPOLLENDPOINTRESPONSE_H

#include "ecsresponse.h"
#include "discoverpollendpointrequest.h"

namespace QtAws {
namespace Ecs {

class DiscoverPollEndpointResponsePrivate;

class QTAWSECS_EXPORT DiscoverPollEndpointResponse : public EcsResponse {
    Q_OBJECT

public:
    DiscoverPollEndpointResponse(const DiscoverPollEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DiscoverPollEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DiscoverPollEndpointResponse)
    Q_DISABLE_COPY(DiscoverPollEndpointResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
