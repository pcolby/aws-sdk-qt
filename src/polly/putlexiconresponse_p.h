// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLEXICONRESPONSE_P_H
#define QTAWS_PUTLEXICONRESPONSE_P_H

#include "pollyresponse_p.h"

namespace QtAws {
namespace Polly {

class PutLexiconResponse;

class PutLexiconResponsePrivate : public PollyResponsePrivate {

public:

    explicit PutLexiconResponsePrivate(PutLexiconResponse * const q);

    void parsePutLexiconResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutLexiconResponse)
    Q_DISABLE_COPY(PutLexiconResponsePrivate)

};

} // namespace Polly
} // namespace QtAws

#endif
