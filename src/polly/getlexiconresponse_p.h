// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLEXICONRESPONSE_P_H
#define QTAWS_GETLEXICONRESPONSE_P_H

#include "pollyresponse_p.h"

namespace QtAws {
namespace Polly {

class GetLexiconResponse;

class GetLexiconResponsePrivate : public PollyResponsePrivate {

public:

    explicit GetLexiconResponsePrivate(GetLexiconResponse * const q);

    void parseGetLexiconResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLexiconResponse)
    Q_DISABLE_COPY(GetLexiconResponsePrivate)

};

} // namespace Polly
} // namespace QtAws

#endif
