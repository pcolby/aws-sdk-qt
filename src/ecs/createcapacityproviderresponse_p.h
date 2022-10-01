// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECAPACITYPROVIDERRESPONSE_P_H
#define QTAWS_CREATECAPACITYPROVIDERRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class CreateCapacityProviderResponse;

class CreateCapacityProviderResponsePrivate : public EcsResponsePrivate {

public:

    explicit CreateCapacityProviderResponsePrivate(CreateCapacityProviderResponse * const q);

    void parseCreateCapacityProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCapacityProviderResponse)
    Q_DISABLE_COPY(CreateCapacityProviderResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
