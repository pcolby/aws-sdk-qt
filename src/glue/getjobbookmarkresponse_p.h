// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBBOOKMARKRESPONSE_P_H
#define QTAWS_GETJOBBOOKMARKRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class GetJobBookmarkResponse;

class GetJobBookmarkResponsePrivate : public GlueResponsePrivate {

public:

    explicit GetJobBookmarkResponsePrivate(GetJobBookmarkResponse * const q);

    void parseGetJobBookmarkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetJobBookmarkResponse)
    Q_DISABLE_COPY(GetJobBookmarkResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
