// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELEXICONRESPONSE_P_H
#define QTAWS_DELETELEXICONRESPONSE_P_H

#include "pollyresponse_p.h"

namespace QtAws {
namespace Polly {

class DeleteLexiconResponse;

class DeleteLexiconResponsePrivate : public PollyResponsePrivate {

public:

    explicit DeleteLexiconResponsePrivate(DeleteLexiconResponse * const q);

    void parseDeleteLexiconResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLexiconResponse)
    Q_DISABLE_COPY(DeleteLexiconResponsePrivate)

};

} // namespace Polly
} // namespace QtAws

#endif
