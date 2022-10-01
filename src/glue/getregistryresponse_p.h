// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRYRESPONSE_P_H
#define QTAWS_GETREGISTRYRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetRegistryResponse;

class GetRegistryResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetRegistryResponsePrivate(GetRegistryResponse * const q);

    void parseGetRegistryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRegistryResponse)
    Q_DISABLE_COPY(GetRegistryResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
