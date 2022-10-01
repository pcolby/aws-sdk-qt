// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETABLERESPONSE_P_H
#define QTAWS_DELETETABLERESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class DeleteTableResponse;

class DeleteTableResponsePrivate : public GlueResponsePrivate {

public:

    explicit DeleteTableResponsePrivate(DeleteTableResponse * const q);

    void parseDeleteTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTableResponse)
    Q_DISABLE_COPY(DeleteTableResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
