// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTAINERAGENTRESPONSE_H
#define QTAWS_UPDATECONTAINERAGENTRESPONSE_H

#include "ecsresponse.h"
#include "updatecontaineragentrequest.h"

namespace QtAws {
namespace Ecs {

class UpdateContainerAgentResponsePrivate;

class QTAWSECS_EXPORT UpdateContainerAgentResponse : public EcsResponse {
    Q_OBJECT

public:
    UpdateContainerAgentResponse(const UpdateContainerAgentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateContainerAgentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContainerAgentResponse)
    Q_DISABLE_COPY(UpdateContainerAgentResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
