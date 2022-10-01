// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTASKDEFINITIONRESPONSE_H
#define QTAWS_REGISTERTASKDEFINITIONRESPONSE_H

#include "ecsresponse.h"
#include "registertaskdefinitionrequest.h"

namespace QtAws {
namespace Ecs {

class RegisterTaskDefinitionResponsePrivate;

class QTAWSECS_EXPORT RegisterTaskDefinitionResponse : public EcsResponse {
    Q_OBJECT

public:
    RegisterTaskDefinitionResponse(const RegisterTaskDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterTaskDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterTaskDefinitionResponse)
    Q_DISABLE_COPY(RegisterTaskDefinitionResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
