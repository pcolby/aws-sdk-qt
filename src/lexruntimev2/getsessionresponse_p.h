// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSESSIONRESPONSE_P_H
#define QTAWS_GETSESSIONRESPONSE_P_H

#include "lexruntimev2response_p.h"

namespace QtAws {
namespace LexRuntimeV2 {

class GetSessionResponse;

class GetSessionResponsePrivate : public LexRuntimeV2ResponsePrivate {

public:

    explicit GetSessionResponsePrivate(GetSessionResponse * const q);

    void parseGetSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSessionResponse)
    Q_DISABLE_COPY(GetSessionResponsePrivate)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
