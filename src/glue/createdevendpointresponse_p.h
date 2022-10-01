// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVENDPOINTRESPONSE_P_H
#define QTAWS_CREATEDEVENDPOINTRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class CreateDevEndpointResponse;

class CreateDevEndpointResponsePrivate : public GlueResponsePrivate {

public:

    explicit CreateDevEndpointResponsePrivate(CreateDevEndpointResponse * const q);

    void parseCreateDevEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDevEndpointResponse)
    Q_DISABLE_COPY(CreateDevEndpointResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
