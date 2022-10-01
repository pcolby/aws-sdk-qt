// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECAPACITYPROVIDERRESPONSE_H
#define QTAWS_DELETECAPACITYPROVIDERRESPONSE_H

#include "ecsresponse.h"
#include "deletecapacityproviderrequest.h"

namespace QtAws {
namespace Ecs {

class DeleteCapacityProviderResponsePrivate;

class QTAWSECS_EXPORT DeleteCapacityProviderResponse : public EcsResponse {
    Q_OBJECT

public:
    DeleteCapacityProviderResponse(const DeleteCapacityProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCapacityProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCapacityProviderResponse)
    Q_DISABLE_COPY(DeleteCapacityProviderResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
