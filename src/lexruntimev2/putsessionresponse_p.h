// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSESSIONRESPONSE_P_H
#define QTAWS_PUTSESSIONRESPONSE_P_H

#include "lexruntimev2response_p.h"

namespace QtAws {
namespace LexRuntimeV2 {

class PutSessionResponse;

class PutSessionResponsePrivate : public LexRuntimeV2ResponsePrivate {

public:

    explicit PutSessionResponsePrivate(PutSessionResponse * const q);

    void parsePutSessionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutSessionResponse)
    Q_DISABLE_COPY(PutSessionResponsePrivate)

};

} // namespace LexRuntimeV2
} // namespace QtAws

#endif
