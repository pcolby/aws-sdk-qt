// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMLTRANSFORMRESPONSE_P_H
#define QTAWS_DELETEMLTRANSFORMRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class DeleteMLTransformResponse;

class DeleteMLTransformResponsePrivate : public GlueResponsePrivate {

public:

    explicit DeleteMLTransformResponsePrivate(DeleteMLTransformResponse * const q);

    void parseDeleteMLTransformResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMLTransformResponse)
    Q_DISABLE_COPY(DeleteMLTransformResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
