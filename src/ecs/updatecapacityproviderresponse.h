// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAPACITYPROVIDERRESPONSE_H
#define QTAWS_UPDATECAPACITYPROVIDERRESPONSE_H

#include "ecsresponse.h"
#include "updatecapacityproviderrequest.h"

namespace QtAws {
namespace Ecs {

class UpdateCapacityProviderResponsePrivate;

class QTAWSECS_EXPORT UpdateCapacityProviderResponse : public EcsResponse {
    Q_OBJECT

public:
    UpdateCapacityProviderResponse(const UpdateCapacityProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCapacityProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCapacityProviderResponse)
    Q_DISABLE_COPY(UpdateCapacityProviderResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
