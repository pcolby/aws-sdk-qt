// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMAPPINGRESPONSE_P_H
#define QTAWS_GETMAPPINGRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetMappingResponse;

class GetMappingResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetMappingResponsePrivate(GetMappingResponse * const q);

    void parseGetMappingResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMappingResponse)
    Q_DISABLE_COPY(GetMappingResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
