// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERCONTAINERINSTANCERESPONSE_H
#define QTAWS_DEREGISTERCONTAINERINSTANCERESPONSE_H

#include "ecsresponse.h"
#include "deregistercontainerinstancerequest.h"

namespace QtAws {
namespace Ecs {

class DeregisterContainerInstanceResponsePrivate;

class QTAWSECS_EXPORT DeregisterContainerInstanceResponse : public EcsResponse {
    Q_OBJECT

public:
    DeregisterContainerInstanceResponse(const DeregisterContainerInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterContainerInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterContainerInstanceResponse)
    Q_DISABLE_COPY(DeregisterContainerInstanceResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
