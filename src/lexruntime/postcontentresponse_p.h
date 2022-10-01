// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTCONTENTRESPONSE_P_H
#define QTAWS_POSTCONTENTRESPONSE_P_H

#include "lexruntimeresponse_p.h"

namespace QtAws {
namespace LexRuntime {

class PostContentResponse;

class PostContentResponsePrivate : public LexRuntimeResponsePrivate {

public:

    explicit PostContentResponsePrivate(PostContentResponse * const q);

    void parsePostContentResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PostContentResponse)
    Q_DISABLE_COPY(PostContentResponsePrivate)

};

} // namespace LexRuntime
} // namespace QtAws

#endif
