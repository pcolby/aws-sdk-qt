// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETABLERESPONSE_P_H
#define QTAWS_UPDATETABLERESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class UpdateTableResponse;

class UpdateTableResponsePrivate : public GlueResponsePrivate {

public:

    explicit UpdateTableResponsePrivate(UpdateTableResponse * const q);

    void parseUpdateTableResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateTableResponse)
    Q_DISABLE_COPY(UpdateTableResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
