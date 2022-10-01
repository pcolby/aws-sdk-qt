// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAPACITYPROVIDERRESPONSE_H
#define QTAWS_CREATECAPACITYPROVIDERRESPONSE_H

#include "ecsresponse.h"
#include "createcapacityproviderrequest.h"

namespace QtAws {
namespace Ecs {

class CreateCapacityProviderResponsePrivate;

class QTAWSECS_EXPORT CreateCapacityProviderResponse : public EcsResponse {
    Q_OBJECT

public:
    CreateCapacityProviderResponse(const CreateCapacityProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCapacityProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCapacityProviderResponse)
    Q_DISABLE_COPY(CreateCapacityProviderResponse)

};

} // namespace Ecs
} // namespace QtAws

#endif
