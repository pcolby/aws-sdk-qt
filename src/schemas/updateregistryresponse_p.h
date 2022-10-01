// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGISTRYRESPONSE_P_H
#define QTAWS_UPDATEREGISTRYRESPONSE_P_H

#include "schemasresponse_p.h"

namespace QtAws {
namespace Schemas {

class UpdateRegistryResponse;

class UpdateRegistryResponsePrivate : public SchemasResponsePrivate {

public:

    explicit UpdateRegistryResponsePrivate(UpdateRegistryResponse * const q);

    void parseUpdateRegistryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRegistryResponse)
    Q_DISABLE_COPY(UpdateRegistryResponsePrivate)

};

} // namespace Schemas
} // namespace QtAws

#endif
