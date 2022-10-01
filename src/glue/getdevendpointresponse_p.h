// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVENDPOINTRESPONSE_P_H
#define QTAWS_GETDEVENDPOINTRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetDevEndpointResponse;

class GetDevEndpointResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetDevEndpointResponsePrivate(GetDevEndpointResponse * const q);

    void parseGetDevEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDevEndpointResponse)
    Q_DISABLE_COPY(GetDevEndpointResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
