// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVENDPOINTSRESPONSE_P_H
#define QTAWS_GETDEVENDPOINTSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetDevEndpointsResponse;

class GetDevEndpointsResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetDevEndpointsResponsePrivate(GetDevEndpointsResponse * const q);

    void parseGetDevEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDevEndpointsResponse)
    Q_DISABLE_COPY(GetDevEndpointsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
