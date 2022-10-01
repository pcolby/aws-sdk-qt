// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETJOBBOOKMARKRESPONSE_P_H
#define QTAWS_RESETJOBBOOKMARKRESPONSE_P_H

#include "glueresponse_p.h"

namespace QtAws {
namespace Glue {

class ResetJobBookmarkResponse;

class ResetJobBookmarkResponsePrivate : public GlueResponsePrivate {

public:

    explicit ResetJobBookmarkResponsePrivate(ResetJobBookmarkResponse * const q);

    void parseResetJobBookmarkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetJobBookmarkResponse)
    Q_DISABLE_COPY(ResetJobBookmarkResponsePrivate)

};

} // namespace Glue
} // namespace QtAws

#endif
