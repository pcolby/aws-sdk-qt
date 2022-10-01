// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVENDPOINTRESPONSE_P_H
#define QTAWS_DELETEDEVENDPOINTRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class DeleteDevEndpointResponse;

class DeleteDevEndpointResponsePrivate : public GlueResponsePrivate {

public:

    explicit DeleteDevEndpointResponsePrivate(DeleteDevEndpointResponse * const q);

    void parseDeleteDevEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDevEndpointResponse)
    Q_DISABLE_COPY(DeleteDevEndpointResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
