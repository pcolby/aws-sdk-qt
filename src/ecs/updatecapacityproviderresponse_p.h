// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECAPACITYPROVIDERRESPONSE_P_H
#define QTAWS_UPDATECAPACITYPROVIDERRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class UpdateCapacityProviderResponse;

class UpdateCapacityProviderResponsePrivate : public EcsResponsePrivate {

public:

    explicit UpdateCapacityProviderResponsePrivate(UpdateCapacityProviderResponse * const q);

    void parseUpdateCapacityProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCapacityProviderResponse)
    Q_DISABLE_COPY(UpdateCapacityProviderResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
