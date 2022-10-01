// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCONTAINERINSTANCERESPONSE_H
#define QTAWS_REGISTERCONTAINERINSTANCERESPONSE_H

#include "ecsresponse.h"
#include "registercontainerinstancerequest.h"

namespace QtAws {
namespace Ecs {

class RegisterContainerInstanceResponsePrivate;

class QTAWSECS_EXPORT RegisterContainerInstanceResponse : public EcsResponse {
    Q_OBJECT

public:
    RegisterContainerInstanceResponse(const RegisterContainerInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterContainerInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterContainerInstanceResponse)
    Q_DISABLE_COPY(RegisterContainerInstanceResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
