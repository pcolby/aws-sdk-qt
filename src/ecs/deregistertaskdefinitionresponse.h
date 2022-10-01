// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERTASKDEFINITIONRESPONSE_H
#define QTAWS_DEREGISTERTASKDEFINITIONRESPONSE_H

#include "ecsresponse.h"
#include "deregistertaskdefinitionrequest.h"

namespace QtAws {
namespace Ecs {

class DeregisterTaskDefinitionResponsePrivate;

class QTAWSECS_EXPORT DeregisterTaskDefinitionResponse : public EcsResponse {
    Q_OBJECT

public:
    DeregisterTaskDefinitionResponse(const DeregisterTaskDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterTaskDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterTaskDefinitionResponse)
    Q_DISABLE_COPY(DeregisterTaskDefinitionResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
