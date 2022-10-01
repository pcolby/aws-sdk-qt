// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCLUSTERCAPACITYPROVIDERSRESPONSE_H
#define QTAWS_PUTCLUSTERCAPACITYPROVIDERSRESPONSE_H

#include "ecsresponse.h"
#include "putclustercapacityprovidersrequest.h"

namespace QtAws {
namespace Ecs {

class PutClusterCapacityProvidersResponsePrivate;

class QTAWSECS_EXPORT PutClusterCapacityProvidersResponse : public EcsResponse {
    Q_OBJECT

public:
    PutClusterCapacityProvidersResponse(const PutClusterCapacityProvidersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutClusterCapacityProvidersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutClusterCapacityProvidersResponse)
    Q_DISABLE_COPY(PutClusterCapacityProvidersResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
