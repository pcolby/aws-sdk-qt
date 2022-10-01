// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMLTRANSFORMRESPONSE_P_H
#define QTAWS_UPDATEMLTRANSFORMRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class UpdateMLTransformResponse;

class UpdateMLTransformResponsePrivate : public GlueResponsePrivate {

public:

    explicit UpdateMLTransformResponsePrivate(UpdateMLTransformResponse * const q);

    void parseUpdateMLTransformResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMLTransformResponse)
    Q_DISABLE_COPY(UpdateMLTransformResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
