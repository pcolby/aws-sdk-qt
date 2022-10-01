// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMLTRANSFORMSRESPONSE_P_H
#define QTAWS_GETMLTRANSFORMSRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetMLTransformsResponse;

class GetMLTransformsResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetMLTransformsResponsePrivate(GetMLTransformsResponse * const q);

    void parseGetMLTransformsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMLTransformsResponse)
    Q_DISABLE_COPY(GetMLTransformsResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
