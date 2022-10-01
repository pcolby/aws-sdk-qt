// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCRIPTRESPONSE_P_H
#define QTAWS_CREATESCRIPTRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class CreateScriptResponse;

class CreateScriptResponsePrivate : public GlueResponsePrivate {

public:

    explicit CreateScriptResponsePrivate(CreateScriptResponse * const q);

    void parseCreateScriptResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateScriptResponse)
    Q_DISABLE_COPY(CreateScriptResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
