// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETABLEVERSIONRESPONSE_P_H
#define QTAWS_DELETETABLEVERSIONRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class DeleteTableVersionResponse;

class DeleteTableVersionResponsePrivate : public GlueResponsePrivate {

public:

    explicit DeleteTableVersionResponsePrivate(DeleteTableVersionResponse * const q);

    void parseDeleteTableVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTableVersionResponse)
    Q_DISABLE_COPY(DeleteTableVersionResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
