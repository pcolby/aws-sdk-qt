// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTIONSRESPONSE_P_H
#define QTAWS_GETCONNECTIONSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetConnectionsResponse;

class GetConnectionsResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetConnectionsResponsePrivate(GetConnectionsResponse * const q);

    void parseGetConnectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConnectionsResponse)
    Q_DISABLE_COPY(GetConnectionsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
