// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTTEXTRESPONSE_P_H
#define QTAWS_POSTTEXTRESPONSE_P_H

#include "lexruntimeresponse_p.h"

namespace QtAws {
namespace LexRuntime {

class PostTextResponse;

class PostTextResponsePrivate : public LexRuntimeResponsePrivate {

public:

    explicit PostTextResponsePrivate(PostTextResponse * const q);

    void parsePostTextResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PostTextResponse)
    Q_DISABLE_COPY(PostTextResponsePrivate)

};

} // namespace LexRuntime
} // namespace QtAws

#endif
