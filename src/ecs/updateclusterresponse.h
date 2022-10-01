// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECLUSTERRESPONSE_H
#define QTAWS_UPDATECLUSTERRESPONSE_H

#include "ecsresponse.h"
#include "updateclusterrequest.h"

namespace QtAws {
namespace Ecs {

class UpdateClusterResponsePrivate;

class QTAWSECS_EXPORT UpdateClusterResponse : public EcsResponse {
    Q_OBJECT

public:
    UpdateClusterResponse(const UpdateClusterRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateClusterRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateClusterResponse)
    Q_DISABLE_COPY(UpdateClusterResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
