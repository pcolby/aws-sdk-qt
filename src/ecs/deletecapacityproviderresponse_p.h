// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECAPACITYPROVIDERRESPONSE_P_H
#define QTAWS_DELETECAPACITYPROVIDERRESPONSE_P_H

#include "ecsresponse_p.h"

namespace QtAws {
namespace Ecs {

class DeleteCapacityProviderResponse;

class DeleteCapacityProviderResponsePrivate : public EcsResponsePrivate {

public:

    explicit DeleteCapacityProviderResponsePrivate(DeleteCapacityProviderResponse * const q);

    void parseDeleteCapacityProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCapacityProviderResponse)
    Q_DISABLE_COPY(DeleteCapacityProviderResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
