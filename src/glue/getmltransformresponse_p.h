// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMLTRANSFORMRESPONSE_P_H
#define QTAWS_GETMLTRANSFORMRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetMLTransformResponse;

class GetMLTransformResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetMLTransformResponsePrivate(GetMLTransformResponse * const q);

    void parseGetMLTransformResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMLTransformResponse)
    Q_DISABLE_COPY(GetMLTransformResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
