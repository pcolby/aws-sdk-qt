// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVENDPOINTRESPONSE_P_H
#define QTAWS_UPDATEDEVENDPOINTRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class UpdateDevEndpointResponse;

class UpdateDevEndpointResponsePrivate : public GlueResponsePrivate {

public:

    explicit UpdateDevEndpointResponsePrivate(UpdateDevEndpointResponse * const q);

    void parseUpdateDevEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDevEndpointResponse)
    Q_DISABLE_COPY(UpdateDevEndpointResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
