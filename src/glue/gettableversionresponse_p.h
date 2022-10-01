// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTABLEVERSIONRESPONSE_P_H
#define QTAWS_GETTABLEVERSIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetTableVersionResponse;

class GetTableVersionResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetTableVersionResponsePrivate(GetTableVersionResponse * const q);

    void parseGetTableVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetTableVersionResponse)
    Q_DISABLE_COPY(GetTableVersionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
