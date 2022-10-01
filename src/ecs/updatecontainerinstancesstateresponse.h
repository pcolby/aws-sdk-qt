// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTAINERINSTANCESSTATERESPONSE_H
#define QTAWS_UPDATECONTAINERINSTANCESSTATERESPONSE_H

#include "ecsresponse.h"
#include "updatecontainerinstancesstaterequest.h"

namespace QtAws {
namespace Ecs {

class UpdateContainerInstancesStateResponsePrivate;

class QTAWSECS_EXPORT UpdateContainerInstancesStateResponse : public EcsResponse {
    Q_OBJECT

public:
    UpdateContainerInstancesStateResponse(const UpdateContainerInstancesStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateContainerInstancesStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContainerInstancesStateResponse)
    Q_DISABLE_COPY(UpdateContainerInstancesStateResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
