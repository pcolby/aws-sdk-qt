// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREGISTRYRESPONSE_P_H
#define QTAWS_CREATEREGISTRYRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class CreateRegistryResponse;

class CreateRegistryResponsePrivate : public GlueResponsePrivate {

public:

    explicit CreateRegistryResponsePrivate(CreateRegistryResponse * const q);

    void parseCreateRegistryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRegistryResponse)
    Q_DISABLE_COPY(CreateRegistryResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
