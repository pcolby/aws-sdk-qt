// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVENDPOINTSRESPONSE_P_H
#define QTAWS_LISTDEVENDPOINTSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class ListDevEndpointsResponse;

class ListDevEndpointsResponsePrivate : public GlueResponsePrivate {

public:

    explicit ListDevEndpointsResponsePrivate(ListDevEndpointsResponse * const q);

    void parseListDevEndpointsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDevEndpointsResponse)
    Q_DISABLE_COPY(ListDevEndpointsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
